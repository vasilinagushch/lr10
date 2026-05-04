#pragma once

#include <vector>
#include <iostream>

#include "GasSensor.h"
#include "SmokeSensor.h"
#include "WaterLeakSensor.h"

class SafetySensorPool {
private:
    std::vector<SafetySensor*> availableSensors;

public:
    // Предварительное создание датчиков
    SafetySensorPool(int gasCount = 2,
        int smokeCount = 2,
        int waterCount = 2) {

        for (int i = 0; i < gasCount; i++) {
            availableSensors.push_back(new GasSensor());
        }

        for (int i = 0; i < smokeCount; i++) {
            availableSensors.push_back(new SmokeSensor());
        }

        for (int i = 0; i < waterCount; i++) {
            availableSensors.push_back(new WaterLeakSensor());
        }
    }

    // Получение датчика по типу
    SafetySensor* acquireSensor(const std::string& type) {
        for (size_t i = 0; i < availableSensors.size(); i++) {
            if (availableSensors[i]->getType() == type) {

                SafetySensor* sensor = availableSensors[i];
                availableSensors.erase(availableSensors.begin() + i);

                sensor->activate();

                std::cout << type
                    << " выдан из пула\n";

                return sensor;
            }
        }

        std::cout << " Свободных датчиков типа "
            << type << " нет\n";

        return nullptr;
    }

    // Возврат обратно в пул
    void releaseSensor(SafetySensor* sensor) {
        if (sensor) {
            sensor->deactivate();
            availableSensors.push_back(sensor);

            std::cout << sensor->getType()
                << " возвращен в пул\n";
        }
    }

    ~SafetySensorPool() {
        for (SafetySensor* sensor : availableSensors) {
            delete sensor;
        }
    }
};
