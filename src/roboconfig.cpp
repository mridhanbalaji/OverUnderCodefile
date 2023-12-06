#include "roboconfig.h"


pros::Controller master(pros::E_CONTROLLER_MASTER);


pros::Motor left_front_motor(11,pros::E_MOTOR_GEAR_600, true); // port 2, not reversed
pros::Motor left_back_motor(1,pros::E_MOTOR_GEAR_600, false); // port 1, not reversed
pros::Motor left_PTO_motor(12,pros::E_MOTOR_GEAR_600, false); // port 2, not reversed
pros::Motor right_front_motor(19,pros::E_MOTOR_GEAR_600, true); // port 3, reversed
pros::Motor right_back_motor(9,pros::E_MOTOR_GEAR_600, false); // port 4, reversed.
pros::Motor right_PTO_motor(7,pros::E_MOTOR_GEAR_600, false); // port 4, reversed.

 
// drivetrain motor groups
pros::MotorGroup left_side_motors({left_front_motor, left_back_motor, left_PTO_motor});
pros::MotorGroup right_side_motors({right_front_motor, right_back_motor, right_PTO_motor});