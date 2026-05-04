#pragma once
#include "DeviceFactory.h"
#include "PremiumRefrigerator.h"   // или BasicRefrigerator

class RefrigeratorFactory : public DeviceFactory {
public:
    SmartDevice* createDevice() override {
        return new PremiumRefrigerator();
    }
};
