#pragma once
#include <string>

class SafetySensor {
protected:
    bool active;

public:
    SafetySensor() : active(false) {}

    virtual void activate() {
        active = true;
    }

    virtual void deactivate() {
        active = false;
    }

    bool isActive() const {
        return active;
    }

    // Проверка состояния
    virtual void monitor() = 0;

    // Тип датчика
    virtual std::string getType() const = 0;

    virtual ~SafetySensor() {}
};
