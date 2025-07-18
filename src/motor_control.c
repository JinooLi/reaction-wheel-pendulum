#include <stdio.h>

#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

void motor_control(float angular_acceleration) {
    printf("Motor control called with angular acceleration: %f\n", angular_acceleration);
}