#include "InductionCooktop.h"
#include <iostream>

void InductionCooktop::detectCookware() {
    std::cout << "[Индукционная плита] Посуда обнаружена\n";
}

void InductionCooktop::turnOn() {
    isOn = true;
    std::cout << "[Индукционная плита] Включена\n";
}

void InductionCooktop::turnOff() {
    isOn = false;
    std::cout << "[Индукционная плита] Выключена\n";
}

std::string InductionCooktop::getStatus() {
    if (isOn) {
        return "Индукционная плита: Включена";
    }
    else {
        return "Индукционная плита: Выключена";
    }
    
}

void InductionCooktop::turnOnBurner() {
    std::cout << "[Индукционная плита] Конфорка включена\n";
}