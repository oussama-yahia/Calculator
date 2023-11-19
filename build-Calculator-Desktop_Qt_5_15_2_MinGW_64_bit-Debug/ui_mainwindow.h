/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *display;
    QPushButton *Button_ac;
    QPushButton *Button_7;
    QPushButton *Button_plus_moins;
    QPushButton *Button_del;
    QPushButton *Button_division;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Button_mul;
    QPushButton *Button_moins;
    QPushButton *Button_plus;
    QPushButton *Button_egale;
    QPushButton *Button_6;
    QPushButton *Button_5;
    QPushButton *Button_4;
    QPushButton *Button_3;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_point;
    QPushButton *Button_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(362, 442);
        MainWindow->setMaximumSize(QSize(377, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(205, 205, 205, 0.7);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(0, 0, 361, 91));
        QFont font;
        font.setPointSize(38);
        display->setFont(font);
        display->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255, 0.7);\n"
"background-color: rgb(177, 177, 177);\n"
"border: 2px solid rgba(255, 255, 255, 0.4);\n"
""));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Button_ac = new QPushButton(centralwidget);
        Button_ac->setObjectName(QString::fromUtf8("Button_ac"));
        Button_ac->setGeometry(QRect(0, 90, 91, 70));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        Button_ac->setFont(font1);
        Button_ac->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_7 = new QPushButton(centralwidget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(0, 160, 91, 70));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        Button_7->setFont(font2);
        Button_7->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_plus_moins = new QPushButton(centralwidget);
        Button_plus_moins->setObjectName(QString::fromUtf8("Button_plus_moins"));
        Button_plus_moins->setGeometry(QRect(90, 90, 91, 70));
        Button_plus_moins->setFont(font1);
        Button_plus_moins->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_del = new QPushButton(centralwidget);
        Button_del->setObjectName(QString::fromUtf8("Button_del"));
        Button_del->setGeometry(QRect(180, 90, 91, 70));
        Button_del->setFont(font1);
        Button_del->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_division = new QPushButton(centralwidget);
        Button_division->setObjectName(QString::fromUtf8("Button_division"));
        Button_division->setGeometry(QRect(270, 90, 91, 70));
        Button_division->setFont(font1);
        Button_division->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_8 = new QPushButton(centralwidget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(90, 160, 91, 70));
        Button_8->setFont(font2);
        Button_8->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_9 = new QPushButton(centralwidget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(180, 160, 91, 70));
        Button_9->setFont(font2);
        Button_9->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_mul = new QPushButton(centralwidget);
        Button_mul->setObjectName(QString::fromUtf8("Button_mul"));
        Button_mul->setGeometry(QRect(270, 160, 91, 70));
        Button_mul->setFont(font1);
        Button_mul->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_moins = new QPushButton(centralwidget);
        Button_moins->setObjectName(QString::fromUtf8("Button_moins"));
        Button_moins->setGeometry(QRect(270, 230, 91, 70));
        Button_moins->setFont(font1);
        Button_moins->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_plus = new QPushButton(centralwidget);
        Button_plus->setObjectName(QString::fromUtf8("Button_plus"));
        Button_plus->setGeometry(QRect(270, 300, 91, 70));
        Button_plus->setFont(font1);
        Button_plus->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_egale = new QPushButton(centralwidget);
        Button_egale->setObjectName(QString::fromUtf8("Button_egale"));
        Button_egale->setGeometry(QRect(270, 370, 91, 70));
        Button_egale->setFont(font1);
        Button_egale->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.05);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_6 = new QPushButton(centralwidget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(180, 230, 91, 70));
        Button_6->setFont(font2);
        Button_6->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(90, 230, 91, 70));
        Button_5->setFont(font2);
        Button_5->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_4 = new QPushButton(centralwidget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(0, 230, 91, 70));
        Button_4->setFont(font2);
        Button_4->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_3 = new QPushButton(centralwidget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(180, 300, 91, 70));
        Button_3->setFont(font2);
        Button_3->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_1 = new QPushButton(centralwidget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(0, 300, 91, 70));
        Button_1->setFont(font2);
        Button_1->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_2 = new QPushButton(centralwidget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(90, 300, 91, 70));
        Button_2->setFont(font2);
        Button_2->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_point = new QPushButton(centralwidget);
        Button_point->setObjectName(QString::fromUtf8("Button_point"));
        Button_point->setGeometry(QRect(180, 370, 91, 70));
        Button_point->setFont(font1);
        Button_point->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        Button_0 = new QPushButton(centralwidget);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(0, 370, 181, 70));
        Button_0->setFont(font1);
        Button_0->setStyleSheet(QString::fromUtf8("background: rgba(255, 255, 255, 0.4);\n"
"border: 1px solid rgba(255, 255, 255, 0.4);\n"
"color: rgb(139, 139, 139);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button_plus_moins->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Button_del->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        Button_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button_mul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Button_moins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button_egale->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
