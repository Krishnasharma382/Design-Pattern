#pragma once

#include <iostream>

class FlyableRobot {
public:
    virtual void fly() = 0;
    virtual ~FlyableRobot() = default;
};

class NormalFly : public FlyableRobot {
public:
    void fly() override {
        std::cout << "Flying normally..." << std::endl;
    }
};

class NoFly : public FlyableRobot {
public:
    void fly() override {
        std::cout << "Cannot fly." << std::endl;
    }
};

