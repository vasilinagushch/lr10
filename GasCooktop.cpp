#include "GasCooktop.h"
#include <iostream>

void GasCooktop::gasControl() {
    std::cout << "[Газовая плита] Активирован контроль газа\n";
}

void GasCooktop::turnOn() {
    isOn = true;
    std::cout << "[Газовая плита] Включена\n";
}

void GasCooktop::turnOff() {
    isOn = false;
    std::cout << "[Газовая плита] Выключена\n";
}

std::string GasCooktop::getStatus() {
    if (isOn) {
        return "Газовая плита: Включена";
    }
    else {
        return "Газовая плита: Выключена";
    }
}

void GasCooktop::turnOnBurner() {
    std::cout << "[Газовая плита] Конфорка включена\n";
}