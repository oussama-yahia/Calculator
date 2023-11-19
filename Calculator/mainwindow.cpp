#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>
#include<string>

QString valeur_1;
QString valeur_2;
float(v_1);
int v_2;
char op ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->display->clear();
    ui->display->setMaxLength(10);


}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_Button_1_clicked()
{
    ui->display->insert("1");
}


void MainWindow::on_Button_2_clicked()
{
    ui->display->insert("2");

}



void MainWindow::on_Button_3_clicked()
{
    ui->display->insert("3");
}


void MainWindow::on_Button_4_clicked()
{
    ui->display->insert("4");
}


void MainWindow::on_Button_5_clicked()
{
    ui->display->insert("5");
}


void MainWindow::on_Button_6_clicked()
{
    ui->display->insert("6");
}


void MainWindow::on_Button_7_clicked()
{
    ui->display->insert("7");
}


void MainWindow::on_Button_8_clicked()
{
    ui->display->insert("8");


    if (ui->Button_plus_moins->isChecked())
    {

        ui->display->insert("-");
    }


}


void MainWindow::on_Button_9_clicked()
{
    ui->display->insert("9");
}


void MainWindow::on_Button_0_clicked()
{
    ui->display->insert("0");
}


void MainWindow::on_Button_egale_clicked()
{   int r =0;
    bool ok;
    valeur_2 = ui->display->text();
    v_2 = valeur_2.toInt(&ok, 10);
   // std::cout<<v_2 <<std::endl;
    ui->display->clear();

    if(op =='+')
    {
        r = v_1+v_2;
        std::cout<<r<<std::endl;

        ui->display->insert(QString::number(r,10));

    }
    else if (op=='-')
    {
        r = v_1-v_2;

        ui->display->insert(QString::number(r,10));
     }
    else if (op=='*')
    {
        r = v_1*v_2;

        ui->display->insert(QString::number(r,10));
    }
     else if (ui->Button_division->isChecked())
     {
        r = v_1/v_2;

        ui->display->insert(QString::number(r,10));

     }


}




void MainWindow::on_Button_plus_clicked()
{

     bool ok;
     valeur_1 = ui->display->text();
     std::cout<<valeur_1.toStdString()<<std::endl;
     if  (ui->display->text() == '.'){

        v_1 =valeur_1.toFloat(&ok);
        std::cout<<v_1<<std::endl;
        ui->display->clear();
        op ='+';

     }

     else{
     v_1 =valeur_1.toInt(&ok, 10);
     std::cout<<v_1<<std::endl;
     ui->display->clear();
     op ='+';

     }
}

void MainWindow::on_Button_ac_clicked()
{
  ui->display->clear();
  ui->Button_plus_moins->setEnabled(true);
}

void MainWindow::on_Button_del_clicked()
{
  ui->display->backspace();
  ui->Button_plus_moins->setEnabled(true);

}


void MainWindow::on_Button_moins_clicked()
{

  bool ok;
  valeur_1 = ui->display->text();
  v_1 = valeur_1.toInt(&ok, 10);
  ui->display->clear();
   op ='-';
}


void MainWindow::on_Button_mul_clicked()
{
  bool ok;
  valeur_1 = ui->display->text();
  v_1 = valeur_1.toInt(&ok, 10);
  ui->display->clear();
  op ='*';
}


void MainWindow::on_Button_plus_moins_clicked()
{

  if (ui->display->text()== nullptr)
     {
        ui->display->insert("-");
        ui->Button_plus_moins->setEnabled(false);

     }

    else if (ui->display->text()!= nullptr)
    {

        ui->display->cursorBackward(false,1);
        ui->display->insert("-");
        ui->display->cursorForward(false,1);
       ui->Button_plus_moins->setEnabled(false);

    }


}

void MainWindow::on_Button_point_clicked()
{ ui->display->insert(".");

}

