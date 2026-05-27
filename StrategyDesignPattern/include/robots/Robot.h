#pragma once

#include "../behaviors/FlyableRobot.h"
#include "../behaviors/TalkableRobot.h"
#include "../behaviors/WalkableRobot.h"

class Robot {
protected:
    WalkableRobot* walkBehavior;
    TalkableRobot* talkBehavior;
    FlyableRobot* flyBehavior;

public:
    Robot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f)
        : walkBehavior(w), talkBehavior(t), flyBehavior(f) {}

    void walk() { walkBehavior->walk(); }
    void talk() { talkBehavior->talk(); }
    void fly() { flyBehavior->fly(); }

    virtual void projection() = 0;
    virtual ~Robot() = default;
};

class CompanionRobot : public Robot {
public:
    CompanionRobot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f)
        : Robot(w, t, f) {}

    void projection() override;
};

class WorkerRobot : public Robot {
public:
    WorkerRobot(WalkableRobot* w, TalkableRobot* t, FlyableRobot* f)
        : Robot(w, t, f) {}

    void projection() override;
};

