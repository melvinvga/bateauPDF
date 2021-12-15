/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class Bateau
  @date 08/11/2021
  @version 1.0 beta 1
  @file bateau.h
*/
#ifndef BATEAU_H
#define BATEAU_H
#include <QString>
/**
 * @brief La classe Bateau
 * C'est la classe mère de BateauVoyageur
 * Chaque Bateau dispose de quatre propriétés
*/
class Bateau
{
private:
    QString idBat;
    QString nomBat;
    int longueurBat;
    int largeurBat;
public:
    Bateau(QString unId,QString unNom,int uneLongueur,int uneLargeur);
    Bateau();
    QString versChaine();
};

#endif // BATEAU_H
