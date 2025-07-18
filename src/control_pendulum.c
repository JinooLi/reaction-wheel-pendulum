#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

float control_pendulum(State state) {
    // Calculate the angular acceleration based on the current state
    float motor_angular_acceleration = state.angle * G / R - state.angular_velocity;

    // Return the angular acceleration for further processing if needed
    return motor_angular_acceleration;
}