/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class BateauVoyageur
  @date 08/11/2021
  @version 1.0 beta 1
  @file bateauvoyageur.h
*/
#ifndef BATEAUVOYAGER_H
#define BATEAUVOYAGER_H
#include "bateau.h"
#include "equipement.h"
#include <QVector>
/**
 * @brief La classe BateauVoyageur
 * C'est la classe fille de BateauVoyageur
 * Chaque BateauVOyageur dispose de sept propriétés
*/
class BateauVoyageur : public Bateau
{
private:
    int vitesseBatVoy;
    QString imageBatVoy;
    QVector<Equipement> lesEquipements;

public:
    BateauVoyageur();
    QString versChaine();
    QString getImageBatVoy();
    BateauVoyageur(QString unId, QString unNom, int uneLongueur, int uneLargeur, int uneVitesse, QString uneImage,QVector<Equipement> uneColEquip);
};

#endif // BATEAUVOYAGER_H
