// les tableaux statiques et les fonctions
// une fonction moyenne() qui calcule la moyenne des valeurs d'un tableau.
#include <iostream>
#include <cmath>
using namespace std;

double moyenne(double tableau[], int tailleTableau);

int main()
{

    double moyenne(0);

    for (int i(0); i < tailleTableau; ++i)
    {
        moyenne += tableau[i];
    }
    moyenne /= tailleTableau;

    return moyenne;
}
