#pragma once

#include <iostream>

class TalkableRobot {
public:
    virtual void talk() = 0;
    virtual ~TalkableRobot() = default;
};

class NormalTalk : public TalkableRobot {
public:
    void talk() override {
        std::cout << "Can talk normally" << std::endl;
    }
};

class NoTalk : public TalkableRobot {
public:
    void talk() override {
        std::cout << "Cannot talk" << std::endl;
    }
};

