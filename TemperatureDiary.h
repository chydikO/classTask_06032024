//
// Created by Oleg Chudnovskiy on 06.03.2024.
//

#ifndef CLASSTASK_06032024_TEMPERATUREDIARY_H
#define CLASSTASK_06032024_TEMPERATUREDIARY_H

enum Month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

class TemperatureDiary {

private:
    double *temperatures;
    int numTemperatures;
    int month;
    int year;

public:
    // Constructor && Destructor
    TemperatureDiary(int m, int y);

    ~TemperatureDiary();

    // adding a new temperature
    void addTemperature(double temp);

    //calculating the average temperature
    [[nodiscard]] double getAverageTemperature() const;

    //finding the minimum temperature
    [[nodiscard]] double getMinTemperature() const;

    //finding the maximum temperature
    [[nodiscard]] double getMaxTemperature() const;

    // displaying the month name
    static const char *getMonthName(int month);

    void descriptionTemperatureDiary() const;
};
#endif //CLASSTASK_06032024_TEMPERATUREDIARY_H
