#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleStudioCode.h"

class SimpleStudioCode : public QMainWindow
{
    Q_OBJECT

public:
    SimpleStudioCode(QWidget *parent = nullptr);
    ~SimpleStudioCode();

private:
    Ui::SimpleStudioCodeClass ui;
};
