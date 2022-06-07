#include "calculateservice.h"

CalculateService::CalculateService()
{ }

double CalculateService::getPolarAngle()
{
    return polarAngle;
}

double CalculateService::getPolarRadius()
{
    return polarRadius;
}

void CalculateService::calculate(const QString &x, const QString &y)
{
    polarRadius = sqrt(pow(x.toDouble(), 2) + pow(y.toDouble(), 2));
    if(y.toDouble() == 0)
        polarAngle = 0;
    else
        polarAngle = atan(y.toDouble() / x.toDouble());
}
