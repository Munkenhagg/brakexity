#ifndef AGENT_H
#define AGENT_H

struct agent_request {
	agent_action_t action
};

typedef enum agent_action_e {
	CREATE_FILE,
	EDIT_FILE,
	DELETE_FILE,
	LIST_DIR,
	READ_FILE
} agent_action_t;

int main(void);

#endif
