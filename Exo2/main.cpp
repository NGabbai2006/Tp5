//Exercice n°2 :
//Réaliser une classe point, analogue à la précédente, mais ne comportant pas de fonction affiche.Pour respecter le principe d'encapsulation des données, 
//prévoir deux méthodes publiques (nommées abscisse et ordonnee) fournissant en retour l'abscisse et l'ordonnée d'un point.
//Adapter le petit programme d'essai précédent pour qu'il fonctionne avec cette nouvelle classe.


#include "Point.h"
using namespace std;

int main()
{
    float x = 2.33;
    float y = 542.1;
    Point test(x, y);
    y = test.abscisse();
    x = test.ordonnee();
    cout << "x : " << x << " y : " << y << endl;
    float d1 = 12.1;
    float d2 = 5.3;
    test.deplace(d1, d2);
    y = test.abscisse();
    x = test.ordonnee();
    cout << "x : " << x << " y : " << y << endl;
}
