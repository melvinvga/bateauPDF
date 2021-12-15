/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class Equipement
  @date 08/11/2021
  @version 1.0 beta 1
  @file equipement.h
*/
#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
/**
 * @brief La classe Equipement
 * C'est la classe Equipement
 * Chaque Equipement dispose de deux propriétés
*/
class Equipement
{
private:
    QString idEquip;
    QString libEquip;
public:
    Equipement(QString sonId, QString sonLibelle);
    Equipement();
    QString versChaine();
};

#endif // EQUIPEMENT_H
