#pragma once
#include "SmartDevice.h"

class CentralController {
private:
    static CentralController* instance; // Единственное место, где есть ссылка на объект

    CentralController(); // Закрытый конструктор, то есть нельзя создать объект класса напрямую

public:
    static CentralController& getInstance(); // Создание или возвращение объекта, static гарантирует, что память будет выделена один раз

    void runAll();

    void cookingScenario(SmartDevice* cooktop,
        SmartDevice* hood);

    ~CentralController();
};