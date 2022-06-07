#pragma once
#include <QValidator>

class CoordinateValidator : public QValidator
{
public:
    CoordinateValidator(QObject *parent = 0);

};

