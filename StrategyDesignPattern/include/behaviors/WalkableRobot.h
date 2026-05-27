#pragma once

#include <iostream>

class WalkableRobot {
public:
    virtual void walk() = 0;
    virtual ~WalkableRobot() = default;
};

class NormalWalk : public WalkableRobot {
public:
    void walk() override {
        std::cout << "Walking normally..." << std::endl;
    }
};

class NoWalk : public WalkableRobot {
public:
    void walk() override {
        std::cout << "Cannot walk." << std::endl;
    }
};

