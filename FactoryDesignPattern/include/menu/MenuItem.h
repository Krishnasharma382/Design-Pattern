#pragma once

#include <string>

using namespace std;

// Single abstract product for all menu items (burger, garlic bread, etc.)
class MenuItem {
public:
    virtual void prepare() = 0;
    virtual ~MenuItem() = default;

protected:
    explicit MenuItem(string menuKind) : menuKind_(menuKind) {}

    const string& menuKind() const { return menuKind_; }
    bool isBurger() const { return menuKind_ == "burger"; }

private:
    string menuKind_;
};
