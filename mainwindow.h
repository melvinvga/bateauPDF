/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class MainWindow
  @date 08/11/2021
  @version 1.0 beta 1
  @file mainwindow.h
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
/**
 * @brief La classe MainWindow
 * C'est la classe fille de QMainWindow
 * Chaque MainWindow dispose de QWidget
*/
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void brochurePDF();
};

#endif // MAINWINDOW_H
