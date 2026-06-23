#ifndef AGENT_H
#define AGENT_H

#include <cJSON.h>
#include <stdbool.h>
#include <stdio.h>

typedef enum agent_action_e {
	CREATE_FILE,
	CREATE_DIR,
	EDIT_FILE,
	DELETE_FILE,
	LIST_DIR,
	READ_FILE
} agent_action_t;

struct agent_request {
        agent_action_t action;
        FILE *entry;
        char *content;
};

extern cJSON json_root;
extern bool server_listen;

int main(void);
int run_agent_svr(void);

#endif
