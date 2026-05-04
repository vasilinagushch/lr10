#pragma once

#include "KitchenFactory.h"

#include "PremiumOven.h"
#include "InductionCooktop.h"
#include "SilentHood.h"
#include "FullSizeDishwasher.h"
#include "PremiumRefrigerator.h"

class PremiumKitchenFactory : public KitchenFactory {
public:
    SmartOven* createOven() override {
        return new PremiumOven();
    }

    SmartCooktop* createCooktop() override {
        return new InductionCooktop();
    }

    SmartHood* createHood() override {
        return new SilentHood();
    }

    SmartDishwasher* createDishwasher() override {
        return new FullSizeDishwasher();
    }

    SmartRefrigerator* createRefrigerator() override {
        return new PremiumRefrigerator();
    }
};
