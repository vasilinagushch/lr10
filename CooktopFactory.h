#pragma once
#include "DeviceFactory.h"
#include "GasCooktop.h"   // или InductionCooktop

class CooktopFactory : public DeviceFactory {
public:
    SmartDevice* createDevice() override {
        return new GasCooktop();
    }
};