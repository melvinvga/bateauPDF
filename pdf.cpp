#include "pdf.h"
#include <QPagedPaintDevice>
#include <QPdfWriter>
#include <QDebug>
/**
 * @brief PDF::PDF
 * Constructeur vide de la classe PDF nécessaire car c'est la base
 * Pas de code dans la méthode
*/
PDF::PDF(QWidget * parent):QTextBrowser(parent)
{

}
/**
 * @brief PDF::ecrireTexte
 * Méthode de la classe PDF nécessaire car il faut rajouter le texte au PDF
 * @param leTexte: QString C'est le texte du document PDF
*/
void PDF::ecrireTexte(QString leTexte)
{
    // écrit le texte
    setHtml(toHtml()+"<p>"+leTexte+"</p>");
}
/**
 * @brief PDF::chargerImage
 * Méthode de la classe PDF nécessaire car il faut rajouter l'image au PDF
 * @param chemin: QString C'est l'image du document PDF
*/
void PDF::chargerImage(QString chemin)
{
    // écrit l'image
    setHtml(toHtml()+"<img src=""+chemin+""/>");
}
/**
 * @brief PDF::fermer
 * Méthode de la classe PDF nécessaire car il faut fermer le PDF en l'enregistrant
 * Enregistrement du document a la fermeture
*/
void PDF::fermer()
{
    qDebug()<<"void PDF::fermer()";
    //fermer le pdf en l'enregistrant
    QPdfWriter* printer = new QPdfWriter(nomDoc);
    printer->newPage();
    printer->setTitle("ATLANTIK: Catalogue des bateaux voyageurs");
    printer->setPageSize(QPagedPaintDevice::A4);

    print(printer);
}
/**
 * @brief PDF::setName
 * Méthode de la classe PDF nécessaire car il faut nomer le PDF
 * @param nomDocument: QString C'est le nom du document PDF
*/
void PDF::setName(QString nomDocument)
{
    qDebug()<<"void PDF::setName(QString nomDocument)";
    nomDoc=nomDocument;
}
