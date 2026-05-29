#pragma once

#include <iostream>
#include "../menu/MenuItem.h"

using namespace std;

class panner : public MenuItem {
public:
    explicit panner(const string& menu) : MenuItem(menu) {}

    void prepare() override {
        if (isBurger()) {
            cout << "Premium panner patty burger" << endl;
        } else {
            cout << "Premium panner garlic bread" << endl;
        }
    }
};
