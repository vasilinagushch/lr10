#pragma once
#include "SafetySensor.h"
#include <iostream>

class GasSensor : public SafetySensor {
public:
    void monitor() override {
        std::cout << "[Датчик газа] Контроль утечки газа\n";
    }

    std::string getType() const override {
        return "GasSensor";
    }
};