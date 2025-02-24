#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Tila nyt: " << tila;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}



void MainWindow::on_add_clicked()
{
    // tila1: syötä numero 1
    // tila 2: syötä numero 2
    // tila 3: laske tulos
    // palaa tilaan 1


    if(tila == 3) {

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;
    qDebug() << "Plus:" << result << "=" << num1 << "+" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);


    qDebug() << "Laskun jälkeen tila:" << tila;
    } else {
        qDebug() << "Virhe: Molempia numeroita ei syötetty";
    }
}

void MainWindow::on_sub_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;
    qDebug() << "Miinus:" << result << "=" << num1 << "-" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);

    qDebug() << "Laskun jälkeen tila:" << tila;
}


void MainWindow::on_mul_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;
    qDebug() << "Kerto:" << result << "=" << num1 << "*" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);


    qDebug() << "Laskun jälkeen tila:" << tila;
}


void MainWindow::on_div_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1/num2;
    qDebug() << "Jako:" << result << "=" << num1 << "/" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);
    ui->sub->setEnabled(false);
    ui->mul->setEnabled(false);
    ui->div->setEnabled(false);

    qDebug() << "Laskun jälkeen tila:" << tila;
}


void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero = " << n;

    QString str = QString::number(n);

    if (tila == 1) {
        qDebug() << "Elementti num1" << n;
        //laita num1
        ui->num1->setText(str);
    } else if (tila == 2) {
        qDebug() << "Elementti num2" << n;
        // laita n -> num2
        ui->num2->setText(str);
    }
}


void MainWindow::on_enter_clicked()
{
    // tila1: syötä numero 1
    // tila 2: syötä numero 2
    // tila 3: laske tulos
    // palaa tilaan 1
    if (tila > 3) {
        tila = 3;
    } else {
    tila++;
    }

    qDebug() << "Siirrytty tilaan" << tila;

    // käyttöliittymän elementtien aktivointi
    if (tila == 1) {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    } else if (tila == 2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    } else if (tila == 3) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
    }

}


void MainWindow::on_clear_clicked()
{
    ui->num1->setText("0");
    ui->num2->setText("0");
    ui->result->setText("0");
}

