#include "equipement.h"
#include <QDebug>
/**
 * @brief Constructeur de la classe Equipement
 * Ce constructeur de la classe Equipement premet de remplir les propriété privée de Equipement avec les valeurs passées en paramètre
 * @param sonId: QString C'est l'identifiant de l'equipement exemple: 7
 * @param sonLibelle: QString C'est le nom de l'equipement exemple "Canne"
*/
Equipement::Equipement(QString sonId, QString sonLibelle)
{
    qDebug()<<"Equipement::Equipement(QString sonId, QString sonLibelle)";
    idEquip=sonId;
    libEquip=sonLibelle;
}
/**
 * @brief Equipement::Equipement
 * Constructeur vide de la classe Equipement nécessaire car il y a des vecteurs de Equipement
 * Pas de code dans la méthode
*/
Equipement::Equipement()
{

}
/**
 * @brief Equipement::versChaine
 * Cette méthode publique renvoie la chaine de caractère utiliser pour décrire les equipements du bateau
 * Exemple:
 * Nom de l'equipement: Canne
 * @return QString Une chaine de caractère sur plusieurs lignes présentant les equipements du bateau
*/
QString Equipement::versChaine()
{
    qDebug()<<"QString Equipement::versChaine()";
    return "- "+libEquip+"<br>";
}
