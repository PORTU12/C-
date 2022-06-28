#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double const nombre(16); // Le nombre dont on veut la racine
    double resultat, resultat7, resultat4, resultat5, resultat6, resultat3, resultat2;
    resultat = sqrt(nombre); // la racine carré
    resultat7 = sin(nombre);
    resultat2 = cos(nombre);
    resultat3 = exp(nombre);
    resultat4 = log(nombre);
    resultat5 = fabs(nombre);
    resultat6 = floor(nombre);
    cout << "Le log 10 de " << nombre << " est " << resultat6 << endl;
    cout << "La valeur absolue de " << nombre << " est " << resultat5 << endl;
    cout << "Le logarithme de " << nombre << " est " << resultat4 << endl;
    cout << "L'exponentielle de " << nombre << " est " << resultat3 << endl;
    cout << "Le cosinus de " << nombre << " est " << resultat2 << endl;
    cout << "Le sinus de " << nombre << " est " << resultat7 << endl;
    cout << "La racine de " << nombre << " est " << resultat << endl;
}