#pragma once


// Абстрактый интерфейс для абстрактной фабрики


#include "SmartOven.h"
#include "SmartCooktop.h"
#include "SmartHood.h"
#include "SmartDishwasher.h"
#include "SmartRefrigerator.h"

class KitchenFactory {
public:
    virtual SmartOven* createOven() = 0;
    virtual SmartCooktop* createCooktop() = 0;
    virtual SmartHood* createHood() = 0;
    virtual SmartDishwasher* createDishwasher() = 0;
    virtual SmartRefrigerator* createRefrigerator() = 0;

    virtual ~KitchenFactory() {}
};
