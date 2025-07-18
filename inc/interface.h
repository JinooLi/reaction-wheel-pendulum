#pragma once
#include <stddef.h>

#define PI 3.14159265358979          // Define pi constant
#define R 1.0                        // moment of inertia of wheel / moment of inertia of pendulum
#define DT (double)0.01              // time step (sec)
#define G 9.81                       // gravitational acceleration (m/s^2)
#define MOTOR_SPEED_MAX (PI * 10.0)  // maximum speed of motor (rad/sec)

typedef struct state {
    float angle;             // radian, 0점은 수직 위쪽 왼쪽은 -pi/2, 오른쪽은 pi/2
    float angular_velocity;  // radian/sec
} State;

typedef struct interface {
#define X(return_type, name, ...) return_type (*name)(__VA_ARGS__);
#include "interface.def"
#undef X
    void *data;  // Pointer to hold any additional data needed for the interface
} Interface;

extern Interface interface;  // Declaration of the interface instance
