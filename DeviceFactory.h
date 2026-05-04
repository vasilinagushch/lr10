#pragma once
// Абстрактный интерфейс Factory method
#include "SmartDevice.h"

class DeviceFactory {
public:
    virtual SmartDevice* createDevice() = 0;

    virtual ~DeviceFactory() {}
};