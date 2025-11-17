#include "kp/intake.hpp"
#include "main.h"

namespace automation {
    void test() {

    }

    void left_seven() {
        lemlib::Chassis *chassis = kp::chassis::get_chassis();
        chassis->setPose(0, 0, 0);

        // define positions
        lemlib::Pose start_pose = lemlib::Pose(0, 0, 0);
        lemlib::Pose first_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose other_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goalpos = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goal = lemlib::Pose(0, 0, 0);
        lemlib::Pose matchload = lemlib::Pose(0, 0, 0);

        // pick up middle 3 blocks
            kp::intake::pickup(); // startm intake
            chassis->moveToPoint(first_blocks.x, first_blocks.y, 300, {.minSpeed = 40, .earlyExitRange = 0.5}); // move to blocks
            chassis->waitUntilDone();
            chassis->moveToPoint(other_blocks.x, other_blocks.y, 300,{.minSpeed = 40, .earlyExitRange = 0.5}); // move to other blocks
            pros::delay(500);

        // score in long goal
            kp::intake::stop(); // stop intake
            chassis->moveToPoint(long_goalpos.x, long_goalpos.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to long goal position
            chassis->turnToPoint(long_goal.x, long_goal.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // face towards long goal
            chassis->moveToPoint(long_goal.x, long_goal.y,300, {.forwards = false,.minSpeed = 50, .earlyExitRange = 1}); // back into long goal
            kp::intake::score(); // score on the long goal
            chassis->waitUntilDone();
            pros::delay(400);

        // pick up matchload
            kp::intake::stop(); // stop intake
            kp::matchload::toggle(); // bring down matchload mech
            kp::intake::pickup(); // start intake
            chassis->moveToPoint(matchload.x, matchload.y, 300, {.minSpeed = 40, .earlyExitRange = 0.7}); // move to matchload tubes
            chassis->waitUntilDone();
            pros::delay(500);

        // score in long goal again
            chassis->moveToPoint(long_goal.x, long_goal.y,500, {.forwards = false, .minSpeed = 40, .earlyExitRange = 1}); // back into long goal again
            kp::intake::score(); // score on the long goal again
            chassis->waitUntilDone();
            pros::delay(500);
    }
    void right_seven() {
        lemlib::Chassis *chassis = kp::chassis::get_chassis();
        chassis->setPose(0, 0, 0);

        // define positions
        lemlib::Pose start_pose = lemlib::Pose(0, 0, 0);
        lemlib::Pose first_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose other_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goal = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goalpos = lemlib::Pose(0, 0, 0);
        lemlib::Pose matchload = lemlib::Pose(0, 0, 0);

        // pick up middle 3 blocks
            kp::intake::pickup(); // startm intake
            chassis->moveToPoint(first_blocks.x, first_blocks.y, 300, {.minSpeed = 40, .earlyExitRange = 0.5}); // move to blocks
            chassis->waitUntilDone();
            chassis->moveToPoint(other_blocks.x, other_blocks.y, 300,{.minSpeed = 40, .earlyExitRange = 0.5}); // move to other blocks
            pros::delay(500);

        // score in long goal
            kp::intake::stop(); // stop intake
            chassis->moveToPoint(long_goalpos.x, long_goalpos.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to long goal position
            chassis->turnToPoint(long_goal.x, long_goal.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // face towards long goal
            chassis->moveToPoint(long_goal.x, long_goal.y,300, {.forwards = false,.minSpeed = 50, .earlyExitRange = 1}); // back into long goal
            kp::intake::score(); // score on the long goal
            chassis->waitUntilDone();
            pros::delay(400);

        // pick up matchload
            kp::intake::stop(); // stop intake
            kp::matchload::toggle(); // bring down matchload mech
            kp::intake::pickup(); // start intake
            chassis->moveToPoint(matchload.x, matchload.y, 300, {.minSpeed = 40, .earlyExitRange = 0.7}); // move to matchload tubes
            chassis->waitUntilDone();
            pros::delay(500);

        // score in long goal again
            chassis->moveToPoint(long_goal.x, long_goal.y,500, {.forwards = false, .minSpeed = 40, .earlyExitRange = 1}); // back into long goal again
            kp::intake::score(); // score on the long goal again
            chassis->waitUntilDone();
            pros::delay(500);        
    }
    void left_fourthree() {
        lemlib::Chassis *chassis = kp::chassis::get_chassis();
        chassis->setPose(0, 0, 0);

        // define positions
        lemlib::Pose start_pose = lemlib::Pose(0, 0, 0);
        lemlib::Pose first_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose other_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose center_high = lemlib::Pose(0, 0, 0);
        lemlib::Pose matchload = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goal = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goalpos = lemlib::Pose(0, 0, 0);
        
        // pick up middle 3 blocks
            kp::intake::pickup(); // startm intake
            chassis->moveToPoint(first_blocks.x, first_blocks.y, 300, {.minSpeed = 40, .earlyExitRange = 0.5}); // move to blocks
            chassis->waitUntilDone();
            chassis->moveToPoint(other_blocks.x, other_blocks.y, 300,{.minSpeed = 40, .earlyExitRange = 0.5}); // move to other blocks
            pros::delay(500);

        // score in Center High Goal
            kp::intake::stop(); // stop intake
            chassis->turnToPoint(center_high.x, center_high.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // turn to center high goal
            chassis->moveToPoint(center_high.x, center_high.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to center high goal
            kp::intake::feed_top(); // score on the center high goal
            chassis->waitUntilDone();
            pros::delay(400);

        // Go to Long Goal
            kp::intake::stop(); // stop intake
            chassis->moveToPoint(long_goalpos.x, long_goalpos.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to long goal position
            chassis->turnToPoint(long_goal.x, long_goal.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // face towards long goal
            chassis->waitUntilDone();

        // pick up matchload
            kp::matchload::toggle(); // bring down matchload mech
            kp::intake::pickup(); // start intake
            chassis->moveToPoint(matchload.x, matchload.y, 300, {.minSpeed = 40, .earlyExitRange = 0.7}); // move to matchload tubes
            chassis->waitUntilDone();
            pros::delay(500);

        // score in long goal
            chassis->moveToPoint(long_goal.x, long_goal.y,500, {.forwards = false, .minSpeed = 40, .earlyExitRange = 1}); // back into long goal
            kp::intake::score(); // score on the long goal
            chassis->waitUntilDone();
            pros::delay(500);    
    }
    void right_fourthree() {
        lemlib::Chassis *chassis = kp::chassis::get_chassis();
        chassis->setPose(0, 0, 0);

        // define positions
        lemlib::Pose start_pose = lemlib::Pose(0, 0, 0);
        lemlib::Pose first_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose other_blocks = lemlib::Pose(0, 0, 0);
        lemlib::Pose center_low = lemlib::Pose(0, 0, 0);
        lemlib::Pose matchload = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goal = lemlib::Pose(0, 0, 0);
        lemlib::Pose long_goalpos = lemlib::Pose(0, 0, 0);

        // pick up middle 3 blocks
            kp::intake::pickup(); // startm intake
            chassis->moveToPoint(first_blocks.x, first_blocks.y, 300, {.minSpeed = 40, .earlyExitRange = 0.5}); // move to blocks
            chassis->waitUntilDone();
            chassis->moveToPoint(other_blocks.x, other_blocks.y, 300,{.minSpeed = 40, .earlyExitRange = 0.5}); // move to other blocks
            pros::delay(500);

        // score in Center High Goal
            kp::intake::stop(); // stop intake
            chassis->turnToPoint(center_low.x, center_low.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // turn to center low goal
            chassis->moveToPoint(center_low.x, center_low.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to center low goal
            kp::intake::outtake(); // score on the center low goal
            chassis->waitUntilDone();
            pros::delay(400);

        // Go to Long Goal
            kp::intake::stop(); // stop intake
            chassis->moveToPoint(long_goalpos.x, long_goalpos.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // move to long goal position
            chassis->turnToPoint(long_goal.x, long_goal.y,300, {.minSpeed = 50, .earlyExitRange = 1}); // face towards long goal
            chassis->waitUntilDone();

        // pick up matchload
            kp::matchload::toggle(); // bring down matchload mech
            kp::intake::pickup(); // start intake
            chassis->moveToPoint(matchload.x, matchload.y, 300, {.minSpeed = 40, .earlyExitRange = 0.7}); // move to matchload tubes
            chassis->waitUntilDone();
            pros::delay(500);

        // score in long goal
            chassis->moveToPoint(long_goal.x, long_goal.y,500, {.forwards = false, .minSpeed = 40, .earlyExitRange = 1}); // back into long goal
            kp::intake::score(); // score on the long goal 
            chassis->waitUntilDone();
            pros::delay(500);         
    }
}