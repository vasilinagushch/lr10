#include "FullSizeDishwasher.h"
#include <iostream>

void FullSizeDishwasher::turnOn() {
    isOn = true;
    std::cout << "[Полноразмерная посудомойка] Включена\n";
}

void FullSizeDishwasher::turnOff() {
    isOn = false;
    std::cout << "[Полноразмерная посудомойка] Выключена\n";
}

std::string FullSizeDishwasher::getStatus() {
    if (isOn) {
        return "Полноразмерная посудомойка: Включена";
    }
    else {
        return "Полноразмерная посудомойка: Выключена";
    }
}

void FullSizeDishwasher::startProgram() {
    std::cout << "[Полноразмерная посудомойка] Запуск программы\n";
}

void FullSizeDishwasher::intensiveWash() {
    std::cout << "[Полноразмерная посудомойка] Интенсивная мойка\n";
}