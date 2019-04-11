#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "estudiante.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_guardar_clicked()
{
    Estudiante objEstudiante;

    objEstudiante.SetNombre(ui->nombre->text());
    objEstudiante.SetMateria(ui->materia->currentText());
    objEstudiante.SetEdad(ui->edad->value());

    Estudiantes.push_back(objEstudiante);
}

void MainWindow::on_mostrar_clicked()
{
    QString name;
    QString age;
    QString subject;

    Estudiante elestudiante;

    QString informacion;

    for(int i=0; i<(int)Estudiantes.size(); i++)
    {
        elestudiante = Estudiantes[i];
        name = elestudiante.GetNombre();
        age = QString::number(elestudiante.GetEdad());
        subject = elestudiante.GetMateria();

        informacion.append(QString::number(i+1)+". Nombre: "+name+"\n"+"Edad: "+age+"\n"+"Materia: "+subject+"\n");
    }

    QMessageBox::information(this, "Caption", informacion);


}















