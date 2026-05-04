#pragma once
#include "SmartDishwasher.h"

class FullSizeDishwasher : public SmartDishwasher {
public:
    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;

   void startProgram() override;
    void intensiveWash();
};