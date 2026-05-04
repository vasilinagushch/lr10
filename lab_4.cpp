#include "CentralController.h"
#include "SmartOven.h"
#include "BasicOven.h"
#include "PremiumOven.h"
#include "SmartRefrigerator.h"
#include "BasicRefrigerator.h"
#include "PremiumRefrigerator.h"
#include "SmartCooktop.h"
#include "GasCooktop.h"
#include "InductionCooktop.h"
#include "SmartHood.h"
#include "BasicHood.h"
#include "SilentHood.h"
#include "SmartDishwasher.h"
#include "CompactDishwasher.h"
#include "FullSizeDishwasher.h"
#include "RecipeManager.h"
#include "OvenFactory.h"
#include "CooktopFactory.h"
#include "HoodFactory.h"
#include "DishwasherFactory.h"
#include "RefrigeratorFactory.h"
#include "BasicKitchenFactory.h"
#include "PremiumKitchenFactory.h"
#include "OvenConfig.h"
#include "CooktopConfig.h"
#include "SafetySensorPool.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "rus");





    // SINGLETON

    cout << "ПАТТЕРН SINGLETON" << endl << endl;

    // Получаем первый экземпляр контроллера
    CentralController& controller1 = CentralController::getInstance();

    // Получаем второй экземпляр контроллера
    CentralController& controller2 = CentralController::getInstance();

    // Сравниваем адреса объектов
    cout << "[SINGLETON] Адрес controller1: " << &controller1 << endl;
    cout << "[SINGLETON] Адрес controller2: " << &controller2 << endl;

    // Проверяем, совпадают ли адреса
    if (&controller1 == &controller2) {
        cout << "[SINGLETON] Singleton работает: это один и тот же объект CentralController" << std::endl;
    }
    else {
        cout << "[SINGLETON] Ошибка: созданы разные объекты" << endl;
    }

    // Запуск методов через оба объекта
    controller1.runAll();
    controller2.runAll();




    // FACTORY METHOD

    cout << endl;
    cout << "ПАТТЕРН FACTORY METHOD" << endl << endl;

    // Создаём наши фабрики

    DeviceFactory* ovenFactory = new OvenFactory();
    DeviceFactory* cooktopFactory = new CooktopFactory();
    DeviceFactory* hoodFactory = new HoodFactory();
    DeviceFactory* dishwasherFactory = new DishwasherFactory();
    DeviceFactory* refrigeratorFactory = new RefrigeratorFactory();

    // Создаём устройства через фабрики

    SmartDevice* Oven = ovenFactory->createDevice();
    SmartDevice* Cooktop = cooktopFactory->createDevice();
    SmartDevice* Hood = hoodFactory->createDevice();
    SmartDevice* Dishwasher = dishwasherFactory->createDevice();
    SmartDevice* Refrigerator = refrigeratorFactory->createDevice();

    // Включаем устройства

    Oven->turnOn(); 
    Cooktop->turnOn();
    Hood->turnOn();
    Dishwasher->turnOn();
    Refrigerator->turnOn();

    cout << "[FACTORY METHOD] Все устройства созданы через Factory Method.\n";

    // Удаляем устройства и фабрики, так как они были созданы через new

    delete Oven;
    delete Cooktop;
    delete Hood;
    delete Dishwasher;
    delete Refrigerator;

    delete ovenFactory;
    delete cooktopFactory;
    delete hoodFactory;
    delete dishwasherFactory;
    delete refrigeratorFactory;





    // ABSTRACT FACTORY

    cout << endl;
    cout << "ПАТТЕРН ABSTRACT METHOD" << endl << endl;

    // Выбор конфигурации кухни
    KitchenFactory* kitchenFactory = new PremiumKitchenFactory();

    // Создание полного комплекта устройств
    SmartOven* oven = kitchenFactory->createOven();
    SmartCooktop* cooktop = kitchenFactory->createCooktop();
    SmartHood* hood = kitchenFactory->createHood();
    SmartDishwasher* dishwasher = kitchenFactory->createDishwasher();
    SmartRefrigerator* refrigerator = kitchenFactory->createRefrigerator();

    // Демонстрация работы
    oven->turnOn();
    cooktop->turnOn();
    hood->turnOn();
    dishwasher->turnOn();
    refrigerator->turnOn();

    cout << "[ABSTRACT METHOD] Полный комплект Premium кухни успешно создан.\n";

    // Очистка памяти
    delete oven;
    delete cooktop;
    delete hood;
    delete dishwasher;
    delete refrigerator;
    delete kitchenFactory;



    // PROTOTYPE

    cout << endl;
    cout << "ПАТТЕРН PROTOTYPE" << endl << endl;
     // Шаблон режима духовки, который мы потом склонируем
    OvenConfig* pizzaTemplate = new OvenConfig("Пицца", 220, 15);

    // Клонирование шаблона
    OvenConfig* customPizza = pizzaTemplate->clone();

    // Индивидуальная настройка
    customPizza->setCookingTime(20);

    pizzaTemplate->showConfig();
    customPizza->showConfig();


    // Шаблон варочной панели
    CooktopConfig* fryingTemplate = new CooktopConfig("Жарка", 8);

    // Клон
    CooktopConfig* customFrying = fryingTemplate->clone();

    customFrying->setHeatingLevel(10);

    fryingTemplate->showConfig();
    customFrying->showConfig();

    delete pizzaTemplate;
    delete customPizza;
    delete fryingTemplate;
    delete customFrying;




    // OBJECT POOL

    cout << endl;
    cout << "ПАТТЕРН OBJECT POOL" << endl << endl;
    SafetySensorPool pool(1, 1, 1); // Создаю пул, где каждого датчика по одной штуке

    // Получаем датчик газа
    SafetySensor* gas1 = pool.acquireSensor("GasSensor");

    cout << "[OBJECT POOL] Первый датчик газа: " << gas1 << endl;

    // Возвращаем обратно
    pool.releaseSensor(gas1);

    // Получаем снова
    SafetySensor* gas2 = pool.acquireSensor("GasSensor");

    cout << "[OBJECT POOL] Второй датчик газа: " << gas2 << endl;

    // Сравнение адресов
    if (gas1 == gas2) {
        cout << "[OBJECT POOL] Пул переиспользовал тот же объект.\n";
    }
    else {
        cout << "[OBJECT POOL] Создан новый объект.\n";
    }

    SafetySensor* gas3 = pool.acquireSensor("GasSensor");

    pool.releaseSensor(gas2);

    return 0;
}