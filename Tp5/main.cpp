//Réaliser une classe point permettant de manipuler un point d'un plan. On prévoira :
//
//un constructeur recevant en arguments les coordonnées(float) d'un point ;
//une méthode deplace effectuant une translation définie par deux paramètres(float);
//une méthode affiche se contentant d'afficher les coordonées cartésiennes du point.
//Les coordonnées du point seront des attributs privés.
//
//On écrira séparément :
//
//un fichier source constituant la déclaration de la classe;
//un fichier source correspondant à sa définition.
//Ecrire, par ailleurs, un petit programme d'essai (main) déclarant un point, l'affichant, le déplaçant et l'affichant à nouveau.

#include "Point.h"
using namespace std;

int main()
{
    float x = 2.33;
    float y = 542.1;
    Point test(x,y);
    test.affiche();
    float d1 = 12.1;
    float d2 = 5.3;
    test.deplace(d1,d2);
    test.affiche();
}
