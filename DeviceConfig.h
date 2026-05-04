#pragma once
#include <string>

class DeviceConfig {
public:
    // Метод клонирования
    virtual DeviceConfig* clone() const = 0; // Метод не изменяет значениие текущего объекта после инициализации

    // Вывод информации о конфигурации
    virtual void showConfig() const = 0;

    virtual ~DeviceConfig() {}
};