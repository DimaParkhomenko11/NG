#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_nul,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_1,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_8,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_9,SIGNAL(clicked()),this,SLOT(numbers()));
    connect(ui->pushButton_dot,SIGNAL(clicked()),this,SLOT(dot()));
    connect(ui->pushButton_plus,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_minus,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_mnoj,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_dilen,SIGNAL(clicked()),this,SLOT(actions()));
    connect(ui->pushButton_kvadrat,SIGNAL(clicked()),this,SLOT(ressult()));
    connect(ui->pushButton_koren,SIGNAL(clicked()),this,SLOT(ressult()));
    connect(ui->pushButton_AC,SIGNAL(clicked()),this,SLOT(clear()));
    connect(ui->pushButton_result,SIGNAL(clicked()),this,SLOT(ressult()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_mnoj->setCheckable(true);
    ui->pushButton_dilen->setCheckable(true);
    ui->pushButton_kvadrat->setCheckable(true);
    ui->pushButton_koren->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numbers()
{
    QPushButton *button=(QPushButton *)sender();
    QString new_label;
    double all_numbers;
    if (ui->result_show->text().contains(".")&&button->text()=="0")
    {
        new_label=ui->result_show->text()+button->text();
    }else
    {
        all_numbers=(ui->result_show->text()+button->text()).toDouble();
        new_label=QString::number(all_numbers,'g',13);
    }
    ui->result_show->setText(new_label);
}



void MainWindow::actions()
{
    QPushButton *button=(QPushButton *)sender();
    numberFirst=ui->result_show->text().toDouble();
    ui->result_show->setText("");
    button->setChecked(true);

}

void MainWindow::ressult()
{
      QPushButton *button=(QPushButton *)sender();
      if(button->text()=="√" | button->text()=="a^2")
      {
        numberFirst=ui->result_show->text().toDouble();
        button->setChecked(true);
      }
    double numberSecond,numberText;
    QString new_label;
    numberSecond=ui->result_show->text().toDouble();
    if (ui->pushButton_plus->isChecked())
    {
        numberText=numberFirst+numberSecond;

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_plus->setChecked(false);
    }
    else
    if (ui->pushButton_minus->isChecked())
    {
        numberText=numberFirst-numberSecond;

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_minus->setChecked(false);
    }
    else
    if (ui->pushButton_mnoj->isChecked())
    {
        numberText=numberFirst*numberSecond;

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_mnoj->setChecked(false);
    }
    else
    if (ui->pushButton_dilen->isChecked())
    {
        if (numberSecond == 0){
            ui->result_show->setText("0");
            QMessageBox::critical(this,"Attention","Error: cannot be divided by zero!!!");
        }
        else{
        numberText=numberFirst/numberSecond;

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_dilen->setChecked(false);
        }
    }
    else
    if (ui->pushButton_koren->isChecked())
    {
        numberText=sqrt(numberFirst);

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_koren->setChecked(false);
    }
    else
    if (ui->pushButton_kvadrat->isChecked())
    {
        numberText=pow(numberFirst,2);

        new_label=QString::number(numberText,'g',13);
        ui->result_show->setText(new_label);
        ui->pushButton_kvadrat->setChecked(false);
    }

}

void MainWindow::clear()
{
    QPushButton *button=(QPushButton *)sender();
    ui->result_show->setText("0");
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mnoj->setChecked(false);
    ui->pushButton_dilen->setChecked(false);
    ui->pushButton_kvadrat->setChecked(false);
    ui->pushButton_koren->setChecked(false);
}

void MainWindow::dot()
{
    if (!(ui->result_show->text().contains('.')))
    ui->result_show->setText(ui->result_show->text()+'.');
}





