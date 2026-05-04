#pragma once
#include "DeviceConfig.h"
#include <iostream>

class OvenConfig : public DeviceConfig {
private:
    std::string mode;
    int temperature;
    int cookingTime;

public:
    OvenConfig(std::string mode = "Стандарт",
        int temperature = 180,
        int cookingTime = 30)
        : mode(mode), temperature(temperature), cookingTime(cookingTime) {
    }

    // Копирование объекта
    OvenConfig* clone() const override {
        return new OvenConfig(*this); // Передаём указатель на текущий объект, используем стандартный конструктор копирования
    }

    // Изменение параметров после клонирования
    void setMode(std::string newMode) {
        mode = newMode;
    }

    void setTemperature(int temp) {
        temperature = temp;
    }

    void setCookingTime(int time) {
        cookingTime = time;
    }

    void showConfig() const override {
        std::cout << "[PROTOTYPE] Режим духовки: " << mode
            << ", Температура: " << temperature
            << "°C, Время: " << cookingTime
            << " мин\n";
    }
};
