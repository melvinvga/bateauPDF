/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class Passerelle
  @date 08/11/2021
  @version 1.0 beta 1
  @file passerelle.h
*/
#ifndef PASSERELLE_H
#define PASSERELLE_H
#include "bateauvoyageur.h"
#include "equipement.h"
#include <QVector>
/**
 * @brief La classe Passerelle
 * C'est la classe Passerelle
 * Chaque Passerelle ne dispose pas propriétés
*/
class Passerelle
{
public:
    Passerelle();
    static QVector<BateauVoyageur> chargerLesBateauxVoyageurs();
    static QVector<Equipement> chargerLesEquipements(int sonId);

};

#endif // PASSERELLE_H
