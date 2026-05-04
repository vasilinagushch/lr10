#pragma once
#include "DeviceConfig.h"
#include <iostream>

class CooktopConfig : public DeviceConfig {
private:
    std::string mode;
    int heatingLevel;

public:
    CooktopConfig(std::string mode = "Обычный",
        int heatingLevel = 5)
        : mode(mode), heatingLevel(heatingLevel) {
    }

    CooktopConfig* clone() const override {
        return new CooktopConfig(*this);
    }

    void setMode(std::string newMode) {
        mode = newMode;
    }

    void setHeatingLevel(int level) {
        heatingLevel = level;
    }

    void showConfig() const override {
        std::cout << "[PROTOTYPE] Режим панели: " << mode
            << ", Уровень нагрева: "
            << heatingLevel << "\n";
    }
};
