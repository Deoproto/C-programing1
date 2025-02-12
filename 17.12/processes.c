#include "processes.h"
#include <string.h>
#include <stdio.h>

Process processes[MAX_PROCESSES];
int processcount = 0;
static int next_id = 1;

static int nextprocessid() {
    if (next_id <= 0) return 0;
    return next_id++;
}

int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        return 0;
    }

    int id = nextprocessid();
    if (id == 0) {
        return 0; 
    }

    Process new_process = {id, ""};
    strncpy(new_process.name, name, MAX_NAME_LENGTH);
    new_process.name[MAX_NAME_LENGTH] = '\0';

    processes[processcount++] = new_process;
    return id;
}

void stopprocess(int id) {
    int found = 0;
    for (int i = 0; i < processcount; ++i) {
        if (processes[i].id == id) {
            found = 1;
        }
        if (found && i < processcount - 1) {
            processes[i] = processes[i + 1];
        }
    }

    if (found) {
        --processcount;
    }
}
