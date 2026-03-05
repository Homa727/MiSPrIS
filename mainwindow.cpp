#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , database(nullptr)
{
    ui->setupUi(this);
    database=new Database(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    if(database){
        database->connectToDatabase();
        ui->lineEdit->setText("База данных подключена");
    }else{
        ui->lineEdit->setText("База данных не подключена");
    }
}

