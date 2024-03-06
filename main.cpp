#include <iostream>
#include "Dish.h"
#include "TemperatureDiary.h"

int main(int argc, char *argv[]) {
    std::cout << "---Task 1--- " << std::endl;

    Dish dish("Паста", "Итальянская паста с соусом", 9.99, "Горячее");

    std::cout << "Название: " << dish.getName() << std::endl;
    std::cout << "Описание: " << dish.getDescription() << std::endl;
    std::cout << "Цена: " << dish.getPrice() << std::endl;
    std::cout << "Тип: " << dish.getType() << std::endl;

    // Использование сеттеров для изменения информации о блюде
    dish.setName("Спагетти");
    dish.setDescription("Итальянские спагетти с мясным соусом");
    dish.setPrice(12.99);
    dish.setType("Горячее");

    dish.displayDishInfo();
    std::cout << std::endl;

    std::cout << "---Task 2--- " << std::endl;
    TemperatureDiary diary(March, 2024);

    diary.addTemperature(15.5);
    diary.addTemperature(16.8);
    diary.addTemperature(6.5);
    diary.addTemperature(8.2);
    diary.addTemperature(12.3);
    diary.addTemperature(10.3);
    diary.addTemperature(9.8);
    diary.addTemperature(11.7);

    diary.descriptionTemperatureDiary();

    double averageTemp = diary.getAverageTemperature();
    std::cout << "Average Temperature: " << averageTemp << std::endl;

    double minTemp = diary.getMinTemperature();
    std::cout << "Minimum Temperature: " << minTemp << std::endl;

    double maxTemp = diary.getMaxTemperature();
    std::cout << "Maximum Temperature: " << maxTemp << std::endl;

    return 0;
}