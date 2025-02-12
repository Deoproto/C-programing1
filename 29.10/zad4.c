#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE##_##NAME##_command
#define DEFINE_COMMAND(NAME, TYPE) \
    void COMMAND(NAME, TYPE)(void) { \
        printf(#TYPE " command: " #NAME "\n"); \
    }

DEFINE_COMMAND(quit, internal);
DEFINE_COMMAND(start, external);

int main() {
    COMMAND(quit, internal)();
    COMMAND(start, external)();
    return 0;
}
