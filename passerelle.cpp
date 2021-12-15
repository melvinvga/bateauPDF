#include "passerelle.h"
#include "jeuenregistrement.h"
#include "equipement.h"
#include <QVector>
#include <QVariant>
#include <QDebug>
/**
 * @brief Constructeur de la classe Passerelle
 * Ce constructeur de la classe Passerelle premet de remplir les propriété privée de Passerelle avec les valeurs passées en paramètre
 * @param JeuEnregistrement: QString C'est les caractèristique du bateau depuis la base de données
*/
QVector<BateauVoyageur> Passerelle::chargerLesBateauxVoyageurs()
{
    qDebug()<<"QVector<BateauVoyageur> Passerelle::chargerLesBateauxVoyageurs()";
    // on déclare la "collection"
    QVector<BateauVoyageur> resultat;
    // on remplit le vecteur
    JeuEnregistrement monJeu("SELECT numeroBateau,libelleBateau,longueur,largeur,vitesse,image FROM bateau WHERE type='v'");

    while(monJeu.fin()) {
        int sonId=monJeu.getValeur("numeroBateau").toInt();
        QString sonNom = monJeu.getValeur("libelleBateau").toString();
        float saLongueur = monJeu.getValeur("longueur").toFloat();
        float saLargeur = monJeu.getValeur("largeur").toFloat();
        float saVitesse = monJeu.getValeur("vitesse").toFloat();
        QString sonImage = monJeu.getValeur("image").toString();

        // j'obtiens ses équipements
        QVector <Equipement> sesEquipements;
        sesEquipements=chargerLesEquipements(sonId);

        // on ajoute le bateau
        resultat.push_back(BateauVoyageur(QString::number(sonId),sonNom,saLongueur,saLargeur,saVitesse,sonImage,sesEquipements));
        monJeu.suivant();
    }

    // on affiche la "collection"
    return resultat;
}
/**
 * @brief Passerelle::Passerelle
 * Constructeur vide de la classe Passerelle nécessaire car il y a des vecteurs de Passerelle
 * Pas de code dans la méthode
*/
Passerelle::Passerelle()
{

}
/**
 * @brief Vecteur de la classe Passerelle
 * Ce constructeur de la classe Passerelle premet de remplir les propriété privée de Passerelle avec les valeurs passées en paramètre
 * @param JeuEnregistrement: QString C'est les caractèristique des equipements du bateau depuis la base de données
*/
QVector<Equipement> Passerelle::chargerLesEquipements(int unIdBateau)
{
    qDebug()<<"QVector<Equipement> Passerelle::chargerLesEquipements(int unIdBateau)";
    // je déclare le vecteur
    QVector<Equipement> resultat;

    // je vais chercher les infos dans la bdd
    JeuEnregistrement monJeuEquip("SELECT Posseder.idBat as id,lib FROM Posseder INNER JOIN equipement ON Posseder.idEquip=equipement.id WHERE idBat="+QString::number(unIdBateau));

    // boucle
    while(monJeuEquip.fin()) {
        QString lId = monJeuEquip.getValeur("id").toString();
        QString leNom = monJeuEquip.getValeur("lib").toString();
        // on l'ajoute au vecteur
        resultat.push_back(Equipement(lId,leNom));
        monJeuEquip.suivant();
    }

    return resultat;
}
