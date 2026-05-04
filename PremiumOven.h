#pragma once

#include "SmartOven.h"

class PremiumOven : public SmartOven {
private:
    bool isOn;

public:
    PremiumOven() : isOn(false) {}

    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;

    void setTemperature(int temp) override;
    void startCooking() override;

    void selfCleaning();
};