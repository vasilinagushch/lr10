#pragma once
#include "SafetySensor.h"
#include <iostream>

class SmokeSensor : public SafetySensor {
public:
    void monitor() override {
        std::cout << "[Датчик дыма] Контроль задымления\n";
    }

    std::string getType() const override {
        return "Датчик дыма";
    }
};
