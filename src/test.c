#include <stdio.h>

#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

void test1(int test_int1, int test_int2) {
    printf("Test1 called with values: %d, %d\n", test_int1, test_int2);
}