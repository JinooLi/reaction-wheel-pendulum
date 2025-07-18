
#include "inc/interface.h"

int main() {
    while (1) {
        // Estimate the current state of the pendulum
        State state = interface.state_estimate();

        // Calculate the control action based on the estimated state
        float angular_acceleration = interface.control_pendulum(state);

        // Limit the control action to the maximum motor speed
        interface.deadline_wait();

        // Apply the control action to the motor
        interface.motor_control(angular_acceleration);
    }
    return 0;
}