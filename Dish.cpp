//
// Created by Oleg Chudnovskiy on 06.03.2024.
//

#include "dish.h"
#include <cstring>
using namespace std;

// Constructor implementation
Dish::Dish(const char* n, const char* d, double p, const char* t) {
    strncpy(name, n, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
    strncpy(description, d, sizeof(description) - 1);
    description[sizeof(description) - 1] = '\0';
    price = p;
    strncpy(type, t, sizeof(type) - 1);
    type[sizeof(type) - 1] = '\0';
}

// Getters implementation
const char* Dish::getName() const {
    return name;
}

const char* Dish::getDescription() const {
    return description;
}

double Dish::getPrice() const {
    return price;
}

const char* Dish::getType() const {
    return type;
}

// Setters implementations
void Dish::setName(const char* n) {
    strncpy(name, n, sizeof(name) - 1);
    name[sizeof(name) - 1] = '\0';
}

void Dish::setDescription(const char* d) {
    strncpy(description, d, sizeof(description) - 1);
    description[sizeof(description) - 1] = '\0';
}

void Dish::setPrice(double p) {
    price = p;
}

void Dish::setType(const char* t) {
    strncpy(type, t, sizeof(type) - 1);
    type[sizeof(type) - 1] = '\0';
}

//Description
void Dish::displayDishInfo() const {
    cout << "Name: " << name << endl;
    cout << "Description: " << description << endl;
    cout << "Price: " << price << endl;
    cout << "Type: " << type << endl;
}