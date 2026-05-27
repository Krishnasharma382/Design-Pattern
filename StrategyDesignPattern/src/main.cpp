#include <iostream>

#include "../include/robots/Robot.h"

void CompanionRobot::projection() {
    std::cout << "Displaying friendly companion features..." << std::endl;
}

void WorkerRobot::projection() {
    std::cout << "Displaying worker efficiency stats..." << std::endl;
}

int main() {
    Robot* robot1 = new CompanionRobot(new NormalWalk(), new NormalTalk(), new NoFly());
    robot1->walk();
    robot1->talk();
    robot1->fly();
    robot1->projection();

    std::cout << "--------------------" << std::endl;

    Robot* robot2 = new WorkerRobot(new NoWalk(), new NoTalk(), new NormalFly());
    robot2->walk();
    robot2->talk();
    robot2->fly();
    robot2->projection();

    // (Simple demo) skipping deletes for brevity.
    return 0;
}

