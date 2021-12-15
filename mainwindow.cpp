#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pdf.h"
#include "bateauvoyageur.h"
#include "passerelle.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    brochurePDF();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::brochurePDF()
{
    qDebug()<<"void MainWindow::brochurePDF()";

    ui->monPDF->setName("bateauVoyageur.pdf");

    QVector <BateauVoyageur> collectionBV;
    collectionBV = Passerelle::chargerLesBateauxVoyageurs();

    for(int compteur=0 ; compteur < collectionBV.size() ; compteur++) {
        BateauVoyageur batV=collectionBV.at(compteur);
        QString image="/tmp/imgAtlantik/"+batV.getImageBatVoy();
        qDebug()<<image;
        ui->monPDF->chargerImage(image);

        QString texte;
        texte= batV.versChaine();
        ui->monPDF->ecrireTexte(texte);
    }

    ui->monPDF->fermer();
}
