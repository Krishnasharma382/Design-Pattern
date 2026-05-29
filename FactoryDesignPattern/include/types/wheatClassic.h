#pragma once

#include <iostream>
#include "../menu/MenuItem.h"

using namespace std;

class wheatClassic : public MenuItem {
public:
    explicit wheatClassic(const string& menu) : MenuItem(menu) {}

    void prepare() override {
        if (isBurger()) {
            cout << "Classic wheat Aloo tikki burger" << endl;
        } else {
            cout << "Classic wheat garlic bread" << endl;
        }
    }
};
