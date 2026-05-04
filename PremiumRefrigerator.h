#pragma once
#include "SmartRefrigerator.h"

class PremiumRefrigerator : public SmartRefrigerator {
private:
    bool isOn;

public:
    PremiumRefrigerator() : isOn(false) {}

    void turnOn() override;
    void turnOff() override;
    std::string getStatus() override;
    void checkProducts() override;
    void analyzeFreshness();
    void suggestRecipes();
};