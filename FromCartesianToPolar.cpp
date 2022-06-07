#include "FromCartesianToPolar.h"
#include "calculateservice.h"

FromCartesianToPolar::FromCartesianToPolar(QWidget *parent)
    : QWidget(parent)
{
    xEdit = new QLineEdit(this);
    yEdit = new QLineEdit(this);
    resultLabel = new QLabel();
    QLabel *xLabel = new QLabel("X:", this);
    QLabel *yLabel = new QLabel("Y:", this);
    QPushButton *calculateBtn = new QPushButton("Calculate", this);

    grid = new QGridLayout();
    vbox = new QVBoxLayout(this);

    grid->setSpacing(5);
    grid->addWidget(xLabel, 0, 0);
    grid->addWidget(xEdit, 0, 1, 1, 4);
    grid->addWidget(yLabel, 1, 0);
    grid->addWidget(yEdit, 1, 1, 1, 4);
    grid->addWidget(calculateBtn, 2, 0, 1, 5);
    grid->addWidget(resultLabel, 3, 0, 1, 5);

    vbox->addLayout(grid);

    QDoubleValidator *xValidator = new QDoubleValidator(xEdit);
    QDoubleValidator *yValidator = new QDoubleValidator(yEdit);
    xEdit->setValidator(xValidator);
    yEdit->setValidator(yValidator);

    connect(calculateBtn, &QPushButton::clicked, this, &FromCartesianToPolar::printText);

    setLayout(vbox);
}

FromCartesianToPolar::~FromCartesianToPolar()
{ }

void FromCartesianToPolar::printText()
{
    CalculateService service;
    service.calculate(xEdit->text(), yEdit->text());

    QString resultStr = "Polar Radius r = " + QString::number(service.getPolarRadius()) + "\n" +
            "Polar angle f = " + QString::number(service.getPolarAngle());

    resultLabel->setText(resultStr);
}
