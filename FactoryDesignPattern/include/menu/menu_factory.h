#pragma once

#include <iostream>
#include <string>

#include "../types/classic.h"
#include "../types/panner.h"
#include "../types/wheatClassic.h"
#include "../types/wheatPanner.h"
#include "MenuItem.h"

using namespace std;

// One factory interface: pass product type + menu (burger or garlicBread)
class MenuFactory {
public:
    virtual MenuItem* create(const string& productType, const string& menu) = 0;
    virtual ~MenuFactory() = default;
};

class NormalMenuFactory : public MenuFactory {
public:
    MenuItem* create(const string& productType, const string& menu) override {
        if (productType == "classic") {
            return new classic(menu);
        }
        if (productType == "panner") {
            return new panner(menu);
        }
        cout << "Invalid product type" << endl;
        return nullptr;
    }
};

class WheatMenuFactory : public MenuFactory {
public:
    MenuItem* create(const string& productType, const string& menu) override {
        if (productType == "classic") {
            return new wheatClassic(menu);
        }
        if (productType == "panner") {
            return new wheatPanner(menu);
        }
        cout << "Invalid product type" << endl;
        return nullptr;
    }
};
