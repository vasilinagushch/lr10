#pragma once
#include "SmartCooktop.h"

class GasCooktop : public SmartCooktop {
public:
    void gasControl();
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void turnOnBurner();
};