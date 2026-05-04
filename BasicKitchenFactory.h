#pragma once

#include "KitchenFactory.h"

#include "BasicOven.h"
#include "GasCooktop.h"
#include "BasicHood.h"
#include "CompactDishwasher.h"
#include "BasicRefrigerator.h"

class BasicKitchenFactory : public KitchenFactory {
public:
    SmartOven* createOven() override {
        return new BasicOven();
    }

    SmartCooktop* createCooktop() override {
        return new GasCooktop();
    }

    SmartHood* createHood() override {
        return new BasicHood();
    }

    SmartDishwasher* createDishwasher() override {
        return new CompactDishwasher();
    }

    SmartRefrigerator* createRefrigerator() override {
        return new BasicRefrigerator();
    }
};
