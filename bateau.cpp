#include "bateau.h"
#include <QDebug>
/**
 * @brief Constructeur de la classe Bateau
 * Ce constructeur de la classe Bateau premet de remplir les propriété privée de Bateau avec les valeurs passées en paramètre
 * @param unId: QString C'est l'identifiant du bateau
 * @param unNom: QString C'est le nom du bateau exemple "Queen Mary"
 * @param uneLongueur: float Longueur du bateau exprimer en mètres exemple: 140.5
 * @param uneLargeur: float Largeur du bateau exprimer en mètres exemple: 25.34
*/
Bateau::Bateau(QString unId,QString unNom,int uneLongueur,int uneLargeur)
{
    qDebug()<<"Bateau::Bateau(QString unId,QString unNom,int uneLongueur,int uneLargeur)";
    idBat = unId;
    nomBat = unNom;
    longueurBat = uneLongueur;
    largeurBat = uneLargeur;
}
/**
 * @brief Bateau::Bateau
 * Constructeur vide de la classe Bateau nécessaire car il y a des vecteurs de Bateau
 * Pas de code dans la méthode
*/
Bateau::Bateau()
{
    //constructeur vide
}
/**
 * @brief Bateau::versChaine
 * Cette méthode publique renvoie la chaine de caractère utiliser pour décrire le bateau
 * Exemple:
 * Nom du bateau: Queen Mary
 * Longueur du bateau: 125 mètres
 * Largeur du bateau: 30 mètres
 * @return QString Une chaine de caractère sur plusieurs lignes présente le Nom du bateau et de ses différentes informations
*/
QString Bateau::versChaine()
{
    qDebug()<<"QString Bateau::versChaine()";
    QString resultat;
    resultat+="Nom du bateau : "+nomBat+"<br>";
    resultat+="Longueur : "+QString::number(longueurBat)+"<br>";
    resultat+="Largeur : "+QString::number(largeurBat)+"<br>";

    return resultat;
}
