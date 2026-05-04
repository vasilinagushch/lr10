#pragma once
#include "SmartDevice.h"

class SmartRefrigerator : public SmartDevice {

public:

    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual std::string getStatus() = 0;
    virtual void checkProducts() = 0;
};