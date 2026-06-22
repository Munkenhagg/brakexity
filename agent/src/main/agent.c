#include <agent.h>
#include <cJSON.h>

cJSON *root;
bool server_listen = true;
int main(void) {
	run_agent_svr();
	return 0;
}
