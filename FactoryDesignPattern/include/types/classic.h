#pragma once

#include <iostream>
#include "../menu/MenuItem.h"

using namespace std;

class classic : public MenuItem {
public:
    explicit classic(const string& menu) : MenuItem(menu) {}

    void prepare() override {
        if (isBurger()) {
            cout << "Classic Aloo tikki burger" << endl;
        } else {
            cout << "Classic garlic bread" << endl;
        }
    }
};
