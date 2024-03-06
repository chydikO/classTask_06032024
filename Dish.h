//
// Created by Oleg Chudnovskiy on 06.03.2024.
//

#ifndef CLASSTASK_06032024_DISH_H
#define CLASSTASK_06032024_DISH_H

#include <iostream>

class Dish {

private:
    char name[50]{};
    char description[100]{};
    double price;
    char type[20]{};

public:
    // Constructor
    Dish(const char* n, const char* d, double p, const char* t);

    // Getters
    [[nodiscard]] const char* getName() const;
    [[nodiscard]] const char* getDescription() const;
    double getPrice() const;
    const char* getType() const;

    // Setters
    void setName(const char* n);
    void setDescription(const char* d);
    void setPrice(double p);
    void setType(const char* t);

    // Displaying dish info
    void displayDishInfo() const;
};

#endif //CLASSTASK_06032024_DISH_H
