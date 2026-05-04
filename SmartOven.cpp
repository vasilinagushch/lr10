#include "SmartOven.h"

void SmartOven::turnOn() {
    isOn = true;
}

void SmartOven::turnOff() {
    isOn = false;  
}

std::string SmartOven::getStatus() {
    return isOn ? "ON" : "OFF";
}

void SmartOven::setTemperature(int temp) {
    temperature = temp;
}