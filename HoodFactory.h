#pragma once
#include "DeviceFactory.h"
#include "SilentHood.h"   // или BasicHood

class HoodFactory : public DeviceFactory {
public:
    SmartDevice* createDevice() override {
        return new SilentHood();
    }
};