#pragma once
#include "BasicHood.h"

void BasicHood::turnOn() {
    isOn = true;
    std::cout << "[Базовая вытяжка] Включена\n";
}

void BasicHood::turnOff() {
    isOn = false;
    std::cout << "[Базовая вытяжка] Выключена\n";
}

std::string BasicHood::getStatus() {
    if (isOn) {
        return "Базовая вытяжка: Включена";
    }
    else {
        return "Базовая вытяжка: Выключена";
    }
}