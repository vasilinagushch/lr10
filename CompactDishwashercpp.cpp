#include "CompactDishwasher.h"
#include <iostream>

void CompactDishwasher::turnOn() {
    isOn = true;
    std::cout << "[Компактная посудомойка] Включена\n";
}

void CompactDishwasher::turnOff() {
    isOn = false;
    std::cout << "[Компактная посудомойка] Выключена\n";
}

std::string CompactDishwasher::getStatus() {
    if (isOn) {
        return "Компактная посудомойка: Включена";
    }
    else {
        return "Компактная посудомойка: Выключена";
    }
}

void CompactDishwasher::startProgram() {
    std::cout << "[Компактная посудомойка] Запуск программы\n";
}
