#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

void deadline_wait(void) {
    // 1. Get the current time

    // 2. Calculate the absolute time for the next deadline

    // 3. Wait until the absolute time is reached

    // 4. Get the current time again
}