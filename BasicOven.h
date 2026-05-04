#pragma once
#include "SmartOven.h"

class BasicOven : public SmartOven {

private:
    bool isOn;

public:
    BasicOven() : isOn(false) {}

    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void startCooking() override;
    void setTemperature(int temp) override;
};


