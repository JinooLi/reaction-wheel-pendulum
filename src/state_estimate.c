#include "../inc/interface.h"

#define X(ret, name, ...) ret name(__VA_ARGS__);
#include "interface.def"
#undef X

State state_estimate() {
    State state;
    state.angle = 0.0f;             // Initialize angle to 0 radians
    state.angular_velocity = 0.0f;  // Initialize angular velocity to 0
    return state;
}