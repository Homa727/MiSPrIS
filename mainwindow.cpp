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
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->lineEdit_8->setVisible(false);
    ui->lineEdit_9->setVisible(false);
    ui->spinBox_3->setVisible(false);
    ui->spinBox_4->setVisible(false);
    
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
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("Введите код:");
    ui->lineEdit_4->setVisible(true);
    ui->lineEdit_4->setPlaceholderText("Введите имя:");
    ui->lineEdit_5->setPlaceholderText("Терминальный (1/0):");
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
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setPlaceholderText("Новый родитель ID");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и новый родитель");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_3_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setPlaceholderText("Новый порядковый индекс");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и новый порядок");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}



void MainWindow::on_radioButton_4_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setPlaceholderText("ID единицы измерения");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и ID единицы");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_5_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setPlaceholderText("ID нового родителя");
    ui->lineEdit_4->setVisible(true);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(true);
    ui->lineEdit_2->setText("Введите ID класса и ID нового родителя для проверки");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_6_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("Код класса:");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(false);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите код класса для проверки уникальности");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_7_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска потомков");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_8_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска родителей");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_9_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для поиска терминальных классов");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}


void MainWindow::on_radioButton_10_clicked()
{
    ui->lineEdit_2->setVisible(true);
    ui->lineEdit_3->setPlaceholderText("ID класса");
    ui->lineEdit_3->setVisible(true);
    ui->lineEdit_4->setVisible(false);
    ui->spinBox->setVisible(true);
    ui->spinBox_2->setVisible(false);
    ui->lineEdit_2->setText("Введите ID класса для удаления");
    ui->lineEdit_5->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
    ui->lineEdit_5->setPlaceholderText(" ");
}

void MainWindow::on_radioButton_11_clicked()
{
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_6->setText("Введите имя перечисления, которое хотите добавить");
    ui->lineEdit_7->setVisible(true);
    ui->spinBox_3->setVisible(false);
    ui->spinBox_4->setVisible(false);
    ui->lineEdit_9->setVisible(true);
    ui->spinBox_3->setPrefix("");
    ui->spinBox_4->setPrefix("");
}


void MainWindow::on_radioButton_12_clicked()
{
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_7->setVisible(true);
    ui->spinBox_3->setVisible(true);
    ui->lineEdit_8->setVisible(true);
    ui->spinBox_4->setVisible(true);
    ui->lineEdit_9->setVisible(true);
    ui->lineEdit_6->setText("Введите данные значения");
    ui->lineEdit_7->setText("Введите enumID");
    ui->lineEdit_8->setText("Введите orderID");
    ui->spinBox_3->setPrefix("");
    ui->spinBox_4->setPrefix("");
}
void MainWindow::on_radioButton_13_clicked()
{
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_7->setVisible(true);
    ui->lineEdit_8->setVisible(true);
    ui->lineEdit_6->setText("Введите id значения которого хотите поменять номер");
    ui->lineEdit_7->setText("Введите имя");
    ui->spinBox_3->setPrefix("Введите id");
    ui->spinBox_4->setPrefix("Введите новый порядковый номер");
    ui->spinBox_3->setVisible(true);
    ui->spinBox_4->setVisible(true);
    ui->lineEdit_9->setVisible(true);
}


void MainWindow::on_radioButton_14_clicked()
{
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->lineEdit_8->setVisible(false);
    ui->spinBox_3->setVisible(false);
    ui->spinBox_4->setVisible(false);
    ui->lineEdit_9->setVisible(true);
    ui->spinBox->setPrefix("");
    ui->spinBox_2->setPrefix("");
}


void MainWindow::on_radioButton_15_clicked()
{
    ui->lineEdit_6->setVisible(false);
    ui->lineEdit_7->setVisible(false);
    ui->lineEdit_8->setVisible(false);
    ui->spinBox_3->setVisible(false);
    ui->spinBox_4->setVisible(false);
    ui->lineEdit_9->setVisible(true);
    ui->spinBox_3->setPrefix("");
    ui->spinBox_4->setPrefix("");
}


void MainWindow::on_radioButton_16_clicked()
{
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_7->setVisible(true);
    ui->lineEdit_8->setVisible(false);
    ui->spinBox_3->setVisible(true);
    ui->spinBox_4->setVisible(false);
    ui->lineEdit_6->setText("Введите id для выбора значения");
    ui->lineEdit_7->setText("Введите id");
    ui->lineEdit_9->setVisible(true);
    ui->spinBox_3->setPrefix("");
    ui->spinBox_4->setPrefix("");
}

void MainWindow::on_radioButton_17_clicked()
{
    ui->lineEdit_6->setVisible(true);
    ui->lineEdit_7->setVisible(true);
    ui->lineEdit_8->setVisible(true);
    ui->spinBox_3->setVisible(true);
    ui->spinBox_4->setVisible(false);
    ui->lineEdit_6->setText("Введите id для выбора значения, которму поменять имя");
    ui->lineEdit_7->setText("Введите id");
    ui->lineEdit_9->setVisible(true);
    ui->spinBox_3->setPrefix("");
    ui->spinBox_4->setPrefix("");
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
    //ui->lineEdit_5->setReadOnly(true);
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
        int newOrder = ui->spinBox_2->value();
        if (database->changeOrder(classID, newOrder)) {
            ui->lineEdit_5->setText("Порядок изменён");
        } else {
            ui->lineEdit_5->setText("Ошибка изменения порядка");
        }
    }
    if(ui->radioButton_4->isChecked()){
        int classID = ui->spinBox->value();
        int unitID = ui->spinBox_2->value();
        if (database->setBaseUnit(classID, unitID)) {
            ui->lineEdit_5->setText("Базовая единица установлена");
        } else {
            ui->lineEdit_5->setText("Ошибка установки единицы");
        }
    }
    if(ui->radioButton_5->isChecked()){
        int classID = ui->spinBox->value();
        int parentID = ui->spinBox_2->value();
        bool cycle=database->checkCycle(classID, parentID);
        if(cycle){
            ui->lineEdit_5->setText("Цикл найден");
        }else{
            ui->lineEdit_5->setText("Цикл не найден");
        }
    }
    if(ui->radioButton_6->isChecked()){
        const QString code=ui->lineEdit_3->text().trimmed();
        if(database->classCodeExists(code)){
            ui->lineEdit_5->setText("Код занят");
        }else{
            ui->lineEdit_5->setText("Код свободен");
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
    if(ui->radioButton_11->isChecked()){
        QString imya=ui->lineEdit_7->text().trimmed();
        if(database->addEnum(imya)){
            ui->lineEdit_9->setText("Перечисление добавлено");
        }else{
            ui->lineEdit_9->setText("Перечисление не добавлено");
        }
    }
    if(ui->radioButton_12->isChecked()){
        QString code = ui->lineEdit_7->text().trimmed();
        int enumid = ui->spinBox_3->value();
        int orderIndex = ui->spinBox_4->value();
        EnumValues val;
        val.enumid = enumid;
        val.code = code;
        val.orderIndex = orderIndex;
        if (database->addEnumValue(val)) {
            ui->lineEdit_9->setText("Значение добавлено");
        } else {
            ui->lineEdit_9->setText("Ошибка добавления значения");
        }
    }
    if(ui->radioButton_13->isChecked()){
        int id=ui->spinBox_3->value();
        int newOrderindex=ui->spinBox_4->value();
        if(database->changeEnumValueOrder(id,newOrderindex)){
            ui->lineEdit_9->setText("Номер изменен");
        }else{
            ui->lineEdit_9->setText("имя не изменено");
        }
    }
    if(ui->radioButton_14->isChecked()){
        QVector<EnumValues> check=database->getEnumValues();
        if(check.empty()){
            ui->lineEdit_9->setText("Значений нет");
        }else{
            QString result;
            for(const EnumValues &v:check){
                result += QString("%1 (%2) (%3) (%4)\n").arg(v.id).arg(v.enumid).arg(v.code).arg(v.orderIndex);
            }
            ui->lineEdit_9->setText(result);
        }
    }
    if(ui->radioButton_15->isChecked()){
        QVector<Enum> check=database->getEnums();
        if(check.empty()){
            ui->lineEdit_9->setText("Перечислений нет");
        }else{
            QString result;
            for(const Enum &e:check){
                result += QString("%1 (%2)\n").arg(e.id).arg(e.name);
            }
            ui->lineEdit_9->setText(result);
        }
    }
    if(ui->radioButton_16->isChecked()){
        int id= ui->spinBox_3->value();
        QVector<EnumValues> check=database->getEnumValueByID(id);
        if(check.empty()){
            ui->lineEdit_9->setText("Введен неправильный id");
        }else{
            QString result;
            for(const EnumValues &val:check){
                result += QString("%1 (%2) (%3) (%4)\n").arg(val.id).arg(val.enumid).arg(val.code).arg(val.orderIndex);
            }
            ui->lineEdit_9->setText(result);
        }
    }
    if(ui->radioButton_17->isChecked()){
        int id=ui->spinBox_3->value();
        QString newcode=ui->lineEdit_8->text().trimmed();
        if(database->updateEnumValue(id,newcode)){
            ui->lineEdit_9->setText("имя изменено");
        }else{
            ui->lineEdit_9->setText("имя не изменено");
        }
    }
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->spinBox->setMaximum(10000);
}








