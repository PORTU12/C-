#include <iostream>
#include <cmath>
using namespace std;


int main()
{

cout << "Le première valeur " << endl;

int a (0);
cin >> a;

cout << "La deuxième valeur " << endl;
int b = 0;
cin >> b;

cout << "La troisième valeur " << endl;
int c = 0;
cin >> c;

int resultat(0), resultat_fin(0), division(0), modulo(0);

resultat = sqrt(a*b);
--resultat;
resultat_fin = a*b+c;
resultat_fin /= 5;
division = a/b;
modulo = b%a;

cout << "le resultat est : " << resultat << " le resultat_fin est : " << resultat_fin << " la division est : " << division << " le modulo est : " << modulo << endl;
}
