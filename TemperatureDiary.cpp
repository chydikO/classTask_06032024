//
// Created by Oleg Chudnovskiy on 06.03.2024.
//

#include "TemperatureDiary.h"
#include <iostream>
using namespace std;

TemperatureDiary::TemperatureDiary(int m, int y) : month(m), year(y), numTemperatures(0), temperatures(nullptr) {
    temperatures = new double[1];
}

TemperatureDiary::~TemperatureDiary() {
    delete[] temperatures; // Release memory
}

void TemperatureDiary::addTemperature(double temp) {
    auto* newTemperatures = new double[numTemperatures + 1];
    for (int i = 0; i < numTemperatures; i++) {
        newTemperatures[i] = temperatures[i];
    }

    delete[] temperatures; // Release old memory
    temperatures = newTemperatures; // Point to the new memory
    temperatures[numTemperatures] = temp;
    numTemperatures++;
}

double TemperatureDiary::getAverageTemperature() const {
    double sum = 0;
    for (int i = 0; i < numTemperatures; i++) {
        sum += temperatures[i];
    }
    return sum / numTemperatures;
}

double TemperatureDiary::getMinTemperature() const {
    double min = temperatures[0];
    for (int i = 1; i < numTemperatures; i++) {
        if (temperatures[i] < min) {
            min = temperatures[i];
        }
    }
    return min;
}

double TemperatureDiary::getMaxTemperature() const {
    double max = temperatures[0];
    for (int i = 1; i < numTemperatures; i++) {
        if (temperatures[i] > max) {
            max = temperatures[i];
        }
    }
    return max;
}

const char* TemperatureDiary::getMonthName(int month) {
    const char* monthNames[] = { "Січень", "Лютий", "Березень", "Квітень", "Травень", "Червень",
                                 "Липень", "Серпень", "Вересень", "Жовтень", "Листопад", "Грудень" };
    return monthNames[month - 1];
}

void TemperatureDiary::descriptionTemperatureDiary() const {
    cout << "Month: " << getMonthName(month) << endl;
    cout << "Year: " << year << endl;
    cout << "Temperatures: ";
    for (int i = 0; i < numTemperatures; i++) {
        cout << temperatures[i] << " ";
    }
    cout << endl;
}
