/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class PDF
  @date 08/11/2021
  @version 1.0 beta 1
  @file pdf.h
*/
#ifndef PDF_H
#define PDF_H
#include <QString>
#include <QTextBrowser>
/**
 * @brief La classe PDF
 * C'est la classe fille de QTextBrowser
 * Chaque PDF dispose de une propriétés
*/
class PDF : public QTextBrowser
{
private:
    QString nomDoc;
public:
    PDF(QWidget* parent);
    void ecrireTexte(QString leTexte);
    void chargerImage(QString chemin);
    void fermer();
    void setName(QString nomDocument);
};

#endif // PDF_H
