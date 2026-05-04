#pragma once
#include "SmartDevice.h"
#include <string>

class SmartOven : public SmartDevice {
protected:
    int temperature;

public:
    SmartOven() {};
    virtual void turnOn() override;
    virtual void turnOff() override;
    virtual std::string getStatus() override;

    virtual void setTemperature(int temp) = 0;
    virtual void startCooking() = 0;
};