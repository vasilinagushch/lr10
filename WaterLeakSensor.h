#pragma once
#include "SafetySensor.h"
#include <iostream>

class WaterLeakSensor : public SafetySensor {
public:
    void monitor() override {
        std::cout << "[Датчик протечки] Контроль утечки воды\n";
    }

    std::string getType() const override {
        return "Датчик протечки";
    }
};
