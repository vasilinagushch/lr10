#pragma once
#include "SmartDevice.h"
#include <iostream>

class SmartCooktop : public SmartDevice {
public:
    void turnOn() = 0;
    void turnOff() = 0;
    std::string getStatus() = 0;

    virtual void turnOnBurner() = 0;
};
