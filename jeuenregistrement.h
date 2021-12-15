/**
  @author Melvin VIOUGEA
  @abstract Ce fichier est le header de la class JeuEnregistrement
  @date 08/11/2021
  @version 1.0 beta 1
  @file jeuenregistrement.h
*/
#ifndef JEUENREGISTREMENT_H
#define JEUENREGISTREMENT_H
#include <QSqlQuery>
/**
 * @brief La classe JeuEnregistrement
 * C'est la classe fille de QSqlQuery
 * Chaque JeuEnregistrement dispose de une propriétés
*/
class JeuEnregistrement : public QSqlQuery
{
public:
    JeuEnregistrement(QString chaineSql);
    JeuEnregistrement();
    void suivant();
    bool fin();
    QVariant getValeur(QString nomChamp);
    void fermer();
};

#endif // JEUENREGISTREMENT_H
