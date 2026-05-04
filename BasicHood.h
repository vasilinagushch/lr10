#pragma once
#include "SmartHood.h"

class BasicHood : public SmartHood {

public:
    BasicHood() : SmartHood() {};
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
};