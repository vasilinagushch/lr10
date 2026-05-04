#pragma once
#pragma once
#include "DeviceFactory.h"
#include "PremiumOven.h"   // или BasicOven

class OvenFactory : public DeviceFactory {
public:
    SmartDevice* createDevice() override {
        return new PremiumOven();
    }
};