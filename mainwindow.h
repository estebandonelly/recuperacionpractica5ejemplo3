#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "estudiante.h"
#include <QString>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_guardar_clicked();

    void on_mostrar_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<Estudiante> Estudiantes;

};

#endif // MAINWINDOW_H
