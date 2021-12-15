#include "bateauvoyageur.h"
#include "equipement.h"
#include <QDebug>
/**
 * @brief Constructeur de la classe BateauVoyageur
 * Ce constructeur de la classe BateauVoyageur premet de remplir les propriété privée de BateauVoyageur avec les valeurs passées en paramètre
 * @param uneVitesse: float C'est la vitesse du bateau en kilomètres par heure exemple: 50
 * @param uneImage: QString C'est le nom du bateau exemple "Queen Mary"
 * @param uneColEquip: QVector Collection d'equipement du bateau
*/
BateauVoyageur::BateauVoyageur(QString unId, QString unNom, int uneLongueur, int uneLargeur, int uneVitesse, QString uneImage, QVector<Equipement> uneCollEquip):Bateau(unId,unNom,uneLongueur,uneLargeur)
{
    // je fais appel au constructeur du bateau
    // et on ajoute les autres propriétés
    vitesseBatVoy=uneVitesse;
    imageBatVoy=uneImage;
    lesEquipements=uneCollEquip;
}

/**
 * @brief BateauVoyageur::BateauVoyageur
 * Constructeur vide de la classe BateauVoyageur nécessaire car il y a des vecteurs de BateauVoyageur
 * Pas de code dans la méthode
*/
BateauVoyageur::BateauVoyageur()
{

}
/**
 * @brief BateauVoyageur::versChaine
 * Cette méthode publique renvoie la chaine de caractère utiliser pour décrire d'autres caractèristiques du bateau
 * Exemple:
 * Vitesse du bateau: 50km/h
 * Image:
 * Equipement du bateau:
 * @return QString Une chaine de caractère sur plusieurs lignes présentant d'autres caractèristiques du bateau
*/
QString BateauVoyageur::versChaine()
{
    qDebug()<<"QString BateauVoyageur::versChaine()";
    QString resultat;
    resultat=Bateau::versChaine();
    resultat+="Vitesse : "+QString::number(vitesseBatVoy)+" noeuds<br>";
    resultat+="Liste des équipements du bateau : <br>";

    for(int compteur=0 ; compteur < lesEquipements.size() ; compteur ++) {
        resultat += lesEquipements[compteur].versChaine();
    }
    return resultat;
}
/**
 * @brief BateauVoyageur::getImageBatVoy
 * Cette méthode publique renvoie l'image utiliser pour décrire le bateau
 * @return QString Une image du bateau
*/
QString BateauVoyageur::getImageBatVoy()
{
    // on affiche le src de l'image
    return imageBatVoy;
}


