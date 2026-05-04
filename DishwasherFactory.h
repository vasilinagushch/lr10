#pragma once
#include "DeviceFactory.h"
#include "FullSizeDishwasher.h"   // или CompactDishwasher

class DishwasherFactory : public DeviceFactory {
public:
    SmartDevice* createDevice() override {
        return new FullSizeDishwasher();
    }
};