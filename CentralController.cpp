#include "CentralController.h"
#include <iostream>

CentralController* CentralController::instance = nullptr; // Выделяется память, создаётся переменная, устанавливается начальное значение

CentralController::CentralController() {}

CentralController& CentralController::getInstance() { // Если объект ещё не создан - создать, если создан, то вернуть
    if (!instance) {
        instance = new CentralController();
    }
    return *instance;
}

void CentralController::runAll() {
    std::cout << "[Центральный контроллер] Запуск всех устройств кухни\n";
}

void CentralController::cookingScenario(SmartDevice* cooktop,
    SmartDevice* hood) {
    cooktop->turnOn();
    hood->turnOn();
    std::cout << "[Центральный контроллер] Сценарий готовки активирован\n";
}

CentralController::~CentralController() {}