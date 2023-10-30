#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Save_clicked()
{
    QString noteText = ui->textEdit->toPlainText(); // Obțineți textul din QTextEdit

        // Deschideți un fișier pentru salvarea notelor
        QString fileName = QFileDialog::getSaveFileName(this, "Salvați notițele", QDir::homePath(), "Text Files (*.txt)");

        if (!fileName.isEmpty()) {
            QFile file(fileName);
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << noteText; // Scrieți textul în fișier
                file.close();
            }
        }
}

