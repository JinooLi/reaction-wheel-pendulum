#pragma once
#include <stddef.h>

typedef struct Interface {
#define X(return_type, name, ...) return_type (*name)(__VA_ARGS__);
#include "interface.def"
#undef X
    void *data;  // Pointer to hold any additional data needed for the interface
} Interface;

extern Interface interface;  // Declaration of the interface instance