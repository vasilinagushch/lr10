#pragma once
#include "SmartCooktop.h"

class InductionCooktop : public SmartCooktop {
public:
    void detectCookware();
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void turnOnBurner();
};