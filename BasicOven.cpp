#include "BasicOven.h"
#include <iostream>

void BasicOven::turnOn() {
    isOn = true;
    std::cout << "[Базовая духовка] Включена\n";
}

void BasicOven::turnOff() {
    isOn = false;
    std::cout << "[Базовая духовка] Выключена\n";
}

std::string BasicOven::getStatus() {
    if (isOn) {
        return "Базовая духовка: Включена";
    }
    else {
        return "Базовая духовка: Выключена";
    }
}

void BasicOven::setTemperature(int temp) {
    temperature = temp;
    std::cout << "[Базовая духовка] Температура: " << temperature << "\n";
}
