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
    ui->lineEdit_2->setVisible(false);
    ui->lineEdit_3->setVisible(false);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(false);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_5->setVisible(false);
    ui->radioButton->setAutoExclusive(true);
    ui->radioButton_2->setAutoExclusive(true);
    ui->radioButton_3->setAutoExclusive(true);
    ui->radioButton_4->setAutoExclusive(true);
    ui->radioButton_5->setAutoExclusive(true);
    ui->radioButton_6->setAutoExclusive(true);
    ui->radioButton_7->setAutoExclusive(true);
    ui->radioButton_8->setAutoExclusive(true);
    ui->radioButton_9->setAutoExclusive(true);
    ui->radioButton_10->setAutoExclusive(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_cursorPositionChanged(int arg1, int arg2)
{
    ui->lineEdit->setReadOnly(true);

}


void MainWindow::on_pushButton_clicked()
{
    if(database){
        database->connectToDatabase();
        ui->lineEdit->setText("База данных подключена");
    }else{
        ui->lineEdit->setText("База данных не подключена");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    if (database) {
        database->disconnectDatabase();
        ui->lineEdit->setText("База данных отключена");
    }
}


void MainWindow::on_radioButton_clicked()
{

    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("Код класса:");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setText("Наименование:");
    ui->lineEdit_4->setVisible(true);
    ui->lineEdit_5->setText("Терминальный (1/0):");
    ui->spinBox->setVisible(true);
    ui->spinBox->setPrefix("Родитель ID: ");
    ui->spinBox_2->setVisible(true);
    ui->spinBox_2->setPrefix("Единица ID: ");
    ui->lineEdit_2->setText("Введите данные для добавления вершины");
    ui->lineEdit_5->clear();
}


void MainWindow::on_radioButton_2_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setText("Новый родитель ID");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и новый родитель");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_3_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setText("Новый порядковый индекс");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и новый порядок");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}



void MainWindow::on_radioButton_4_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setText("ID единицы измерения");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и ID единицы");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_5_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setText("ID нового родителя");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и ID нового родителя для проверки");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_6_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("Код класса:");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(false);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите код класса для проверки уникальности");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_7_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска потомков");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_8_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска родителей");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_9_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска терминальных классов");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_10_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для удаления");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}

void MainWindow::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{
    ui->lineEdit_2->setReadOnly(true);
}


void MainWindow::on_lineEdit_3_cursorPositionChanged(int arg1, int arg2)
{
    //ui->lineEdit_3->setReadOnly(true);
}


void MainWindow::on_lineEdit_4_cursorPositionChanged(int arg1, int arg2)
{
    //ui->lineEdit_4->setReadOnly(true);
}

void MainWindow::on_lineEdit_5_cursorPositionChanged(int arg1, int arg2){
    ui->lineEdit_5->setReadOnly(true);
}

void MainWindow::on_pushButton_4_clicked()
{
    qDebug()<<"Кнопка нажата";
    if(ui->radioButton->isChecked()){
        QString code = ui->lineEdit_3->text().trimmed();
        QString name = ui->lineEdit_4->text().trimmed();
        bool isTerminal = (ui->lineEdit_5->text().trimmed() == "1");
        int parentID = ui->spinBox->value();
        int unitID = ui->spinBox_2->value();
        int order = 0;
        ProductClass cls;
        cls.code = code;
        cls.name = name;
        cls.isTerminal = isTerminal;
        cls.baseUnitID = unitID;
        cls.parentID = parentID;
        cls.orderindex = order;
        if (database->AddProductClass(cls)) {
            ui->lineEdit_5->setText("Вершина добавлена");
        } else {
            ui->lineEdit_5->setText("Ошибка добавления вершины (возможно, код не уникален или цикл)");
        }
    }
    if(ui->radioButton_2->isChecked()){
        int classID=ui->spinBox->value();
        int newParentID=ui->spinBox_2->value();
        if (database->moveProductClass(classID, newParentID)) {
            ui->lineEdit_5->setText("Вершина перемещена");
        } else {
            ui->lineEdit_5->setText("Ошибка перемещения");
        }
    }
    if(ui->radioButton_3->isChecked()){
        int classID = ui->spinBox->value();
        int newOrder = ui->spinBox->value();
        if (database->changeOrder(classID, newOrder)) {
            ui->lineEdit_5->setText("Порядок изменён");
        } else {
            ui->lineEdit_5->setText("Ошибка изменения порядка");
        }
    }
    if(ui->radioButton_4->isChecked()){
        int classID = ui->spinBox->value();
        int unitID = ui->spinBox->value();
        if (database->setBaseUnit(classID, unitID)) {
            ui->lineEdit_5->setText("Базовая единица установлена");
        } else {
            ui->lineEdit_5->setText("Ошибка установки единицы");
        }
    }
    if(ui->radioButton_5->isChecked()){
        int classID = ui->spinBox->value();
        int parentID = ui->spinBox->value();
        bool cycle=database->checkCycle(classID, parentID);
        if(cycle){
            ui->lineEdit_5->setText("Цикл найден");
        }else{
            ui->lineEdit_5->setText("Цикл не найден");
        }
    }
    if(ui->radioButton_6->isChecked()){
        const QString code=ui->lineEdit_3->text();
        if(database->classCodeExists(const QString &code)){
            ui->lineEdit_5->setText("Код уникален");
        }else{
            ui->lineEdit_5->setText("Код не уникален");
        }
    }
    if(ui->radioButton_7->isChecked()){
        int parentID=ui->spinBox->value();
        QVector<ProductClass> childs = database->getAllChild(parentID);
        if (childs.isEmpty()) {
            ui->lineEdit_5->setText("Потомков не найдено");
        } else {
            QString result;
            for (const ProductClass &pc : childs) {
                result += QString("%1 (%2)\n").arg(pc.name).arg(pc.code);
            }
            ui->lineEdit_5->setText(result);
        }
    }
    if(ui->radioButton_8->isChecked()){
        int classID=ui->spinBox->value();
        QVector<ProductClass> parents = database->getAllParents(classID);
        if (parents.isEmpty()) {
            ui->lineEdit_5->setText("Родителей не найдено");
        } else {
            QString result;
            for (const ProductClass &pc : parents) {
                result += QString("%1 (%2)\n").arg(pc.name).arg(pc.code);
            }
            ui->lineEdit_5->setText(result);
        }
    }
    if(ui->radioButton_9->isChecked()){
        int parentID=ui->spinBox->value();
        QVector<ProductClass> terminals = database->getTerminalClasses(parentID);
        if (terminals.isEmpty()) {
            ui->lineEdit_5->setText("Терминальных классов не найдено");
        } else {
            QString result;
            for (const ProductClass &pc : terminals) {
                result += QString("%1 (%2)\n").arg(pc.name).arg(pc.code);
            }
            ui->lineEdit_5->setText(result);
        }
    }
    if(ui->radioButton_10->isChecked()){
        int id_for_del=ui->spinBox->value();
        if (database->deleteProductClass(id_for_del)) {
            ui->lineEdit_5->setText("Вершина удалена");
        } else {
            ui->lineEdit_5->setText("Ошибка удаления");
        }
    }
}

