#include <stdio.h>

#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

void print(const char *list) { printf("Printing: %s\n", list); }