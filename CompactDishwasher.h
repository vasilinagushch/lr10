#pragma once
#include "SmartDishwasher.h"

class CompactDishwasher : public SmartDishwasher {

    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;


    void startProgram() override;
};