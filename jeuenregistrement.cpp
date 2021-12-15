#include "jeuenregistrement.h"
#include <QVariant>
#include <QDebug>
/**
 * @brief JeuEnregistrement::JeuEnregistrement
 * Constructeur vide de la classe JeuEnregistrement nécessaire car il y a des vecteurs de JeuEnregistrement
 * Pas de code dans la méthode
*/
JeuEnregistrement::JeuEnregistrement()
{

}
/**
 * @brief Constructeur de la classe JeuEnregistrement
 * Ce constructeur de la classe JeuEnregistrement premet de remplir les propriété privée de JeuEnregistrement avec les valeurs passées en paramètre
 * @param chaineSql: QString C'est les enregistrements de la base de données
*/
JeuEnregistrement::JeuEnregistrement(QString chaineSql):QSqlQuery (chaineSql)
{
    //Ouvre la requête sur le premier enregistrement
    first();
}
/**
 * @brief JeuEnregistrement::suivant
 * Méthode de la classe JeuEnregistrement nécessaire car il faut passer l'enregistrement suivant
 * next
*/
void JeuEnregistrement::suivant()
{
    qDebug()<<"void JeuEnregistrement::suivant()";
    next();
}
/**
 * @brief JeuEnregistrement::fin
 * Méthode de la classe JeuEnregistrement nécessaire car il faut vérifier l'enregistrement
 * return isValid
*/
bool JeuEnregistrement::fin()
{
    qDebug()<<"bool JeuEnregistrement::fin()";
    return isValid();
}
/**
 * @brief JeuEnregistrement::getValeur
 * Méthode de la classe JeuEnregistrement nécessaire car il faut recuperer l'enregistrement
 * return value
*/
QVariant JeuEnregistrement::getValeur(QString nomChamp)
{
    qDebug()<<"QVariant JeuEnregistrement::getValeur(QString nomChamp)";
    return value(nomChamp);
}

/**
 * @brief JeuEnregistrement::fermer
 * Méthode vide de la classe JeuEnregistrement nécessaire car il faut fermer l'enregistrement
 * Pas de code dans la méthode
*/
void JeuEnregistrement::fermer()
{
    qDebug()<<"void JeuEnregistrement::fermer()";
    //fermeture de la requete
    //nothing to do
}
