#include "BasicRefrigerator.h"
#include <iostream>

void BasicRefrigerator::turnOn() {
    isOn = true;
    std::cout << "[Базовый холодильник] Включен\n";
}

void BasicRefrigerator::turnOff() {
    isOn = false;
    std::cout << "[Базовый холодильник] Выключен\n";
}

std::string BasicRefrigerator::getStatus() {
    if (isOn) {
        return "Базовый холодильник: Включен";
    }
    else {
        return "Базовый холодильник: Выключен";
    }
}

void BasicRefrigerator::checkProducts() {
    std::cout << "[Базовый холодильник] Проверка продуктов\n";
}