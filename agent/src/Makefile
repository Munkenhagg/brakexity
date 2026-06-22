ROOT := ..
CC = gcc
CFLAGS =  -O2 -march=native -Wall -Wextra -Wmaybe-uninitialized -Winit-self -Wpedantic -Wshadow -Wformat=2 -Wformat-security -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wconversion -Wsign-conversion -Wundef -Werror=shadow -Werror=format-security -fno-omit-frame-pointer -Wcast-qual -Wlogical-op -Wduplicated-cond -Wduplicated-branches -Wstrict-overflow=3 -Warray-bounds -Wstringop-overflow -Wnull-dereference -Wwrite-strings -Wold-style-definition -Wredundant-decls -Wnested-externs -Winline -Wdisabled-optimization -Wfloat-equal -Wswitch-default -Wswitch-enum -Wparentheses -Wsequence-point -Wbad-function-cast -Wpointer-arith -Wtype-limits -Wunreachable-code -MMD -MP
INCLUDE = -Iinclude -Iinclude/cJSON
ARCH = x86_64
OUT = arch/$(ARCH)/out
BIN := $(OUT)/ai-agent
SRC_PARSE := $(addprefix parse/, pre_proc.c exec.c confirm_exec.c)
SRC_JSON := cjson/cJSON.c
SRC_SERVER := $(addprefix server/, start_server.c)
MAIN := main/agent.c
SRC := $(SRC_PARSE) $(SRC_JSON) $(SRC_SERVER) $(MAIN)
OBJ := $(patsubst %.c,build/%.o,$(SRC))

all: $(BIN)

build/%.o: %.c
	@printf "CC  %-40s => %s\n" "$<" "$@"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(BIN): $(OBJ)
	@$(CC) $(OBJ) -o $(BIN)

clean:
	rm -rf $(BIN) $(OBJ)

-include $(OBJ:.o=.d)

.PHONY: clean
