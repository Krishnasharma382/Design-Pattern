#include <iostream>

#include "../include/menu/menu_factory.h"

using namespace std;

int main() {
    MenuFactory* factory = new WheatMenuFactory();

    // Same type "classic", different menu from factory
    MenuItem* wheatBurger = factory->create("classic", "burger");
    MenuItem* wheatGarlic = factory->create("classic", "garlicBread");

    if (wheatBurger != nullptr) {
        wheatBurger->prepare();
    }
    if (wheatGarlic != nullptr) {
        wheatGarlic->prepare();
    }

    cout << "--------------------" << endl;

    MenuFactory* normalFactory = new NormalMenuFactory();
    MenuItem* pannerBurger = normalFactory->create("panner", "burger");
    MenuItem* pannerGarlic = normalFactory->create("panner", "garlicBread");

    if (pannerBurger != nullptr) {
        pannerBurger->prepare();
    }
    if (pannerGarlic != nullptr) {
        pannerGarlic->prepare();
    }

    return 0;
}
