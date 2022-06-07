#pragma once
#include <iostream>
#include <QString>
#include <cmath>

class CalculateService
{
private:
    double polarRadius;
    double polarAngle;

public:
    CalculateService();
    void calculate(const QString &x, const QString &y);
    double getPolarRadius();
    double getPolarAngle();
};

