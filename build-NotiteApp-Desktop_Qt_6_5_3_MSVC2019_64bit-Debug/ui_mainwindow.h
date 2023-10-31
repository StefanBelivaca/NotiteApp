/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEdit;
    QPushButton *Save;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(719, 554);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:rgb(96, 108, 56);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:  white:\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(textEdit);

        Save = new QPushButton(centralwidget);
        Save->setObjectName("Save");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(11);
        font2.setBold(true);
        Save->setFont(font2);
        Save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(40, 54, 24);\n"
"color:white;\n"
"\n"
"\n"
"}"));

        verticalLayout->addWidget(Save);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Gestionar de notite", nullptr));
        Save->setText(QCoreApplication::translate("MainWindow", "Salveaza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
