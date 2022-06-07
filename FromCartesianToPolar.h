#pragma once
#include <QtWidgets>
#include "calculateservice.h"

class FromCartesianToPolar : public QWidget
{
    Q_OBJECT

private:
    QLineEdit* xEdit;
    QLineEdit* yEdit;
    QGridLayout* grid;
    QLabel* resultLabel;
    QVBoxLayout* vbox;

public:
    FromCartesianToPolar(QWidget* parent = 0);
    virtual ~FromCartesianToPolar();

private slots:
    void printText();
};


