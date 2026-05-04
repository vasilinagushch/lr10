#include "PremiumRefrigerator.h"
#include <iostream>


void PremiumRefrigerator::turnOn() {
    isOn = true;
    std::cout << "[Премиум холодильник] Включен\n";
}

void PremiumRefrigerator::turnOff() {
    isOn = false;
    std::cout << "[Премиум холодильник] Выключен\n";
}

void PremiumRefrigerator::checkProducts() {
    std::cout << "[Премиум холодильник] Умная проверка\n";
}

void PremiumRefrigerator::analyzeFreshness() {
    std::cout << "[Премиум холодильник] Анализ свежести\n";
}

void PremiumRefrigerator::suggestRecipes() {
    std::cout << "[Премиум холодильник] Предложение рецептов\n";

}

std::string PremiumRefrigerator::getStatus() {
    if (isOn) {
        return "Премиум холодильник: Включен";
    }
    else {
        return "Премиум холодильник: Выключен";
    }
}


