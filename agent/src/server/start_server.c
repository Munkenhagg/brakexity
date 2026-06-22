#include <agent.h>
#include <config.h>
#include <unistd.h>
#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>
#include <stddef.h>

int run_agent_svr(void) {
	int server_fd;
	int client_fd;
	struct sockaddr_in addr;
	char recvbuf[RECV_NET_BUF_SZ] = {0};
	server_fd = socket(AF_INET, SOCK_STREAM, 0);
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_port = htons(AGENT_SERVER_PORT);
	bind(server_fd, (struct sockaddr*)&addr, sizeof(addr));
	listen(server_fd, LISTEN_BACKLOG_SZ);
	printf("Listening on port %d", AGENT_SERVER_PORT);

	while (server_listen) {
		client_fd = accept(server_fd, NULL, NULL);
		read(client_fd, recvbuf, sizeof(recvbuf));
		printf("Request:\n%s\n", recvbuf);
		char *resp =
		"HTTP/1.1 200 OK\r\n"
		"Content-Type: text/plain\r\n"
		"Content-Length: 24\r\n"
		"Action successfully sent";
		send(client_fd, resp, strlen(resp), 0);

		close(client_fd);
	}
	return 0;
}
