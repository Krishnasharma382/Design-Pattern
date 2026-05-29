#pragma once

#include <iostream>
#include "../menu/MenuItem.h"

using namespace std;

class wheatPanner : public MenuItem {
public:
    explicit wheatPanner(const string& menu) : MenuItem(menu) {}

    void prepare() override {
        if (isBurger()) {
            cout << "Premium wheat panner patty burger" << endl;
        } else {
            cout << "Premium wheat panner garlic bread" << endl;
        }
    }
};
