#include <iostream>
#include <vector> //Ne pas oublier !
using namespace std;
int main()
{
    int const nombreMeilleursScores(5);                 // La taille du tableau
    vector<int> meilleursScores(nombreMeilleursScores); // Déclaration du tableau
    meilleursScores[0] = 118218;                        // Remplissage de la première case
    meilleursScores[1] = 100432;                        // Remplissage de la deuxième case
    meilleursScores[2] = 87347;                         // Remplissage de la troisième case
    meilleursScores[3] = 64523;                         // Remplissage de la quatrième case
    meilleursScores[4] = 31415;                         // Remplissage de la cinquième case
    // Changez la taille d'un tableau dynamique
    vector<int> tableau(3, 2);
    tableau.push_back(8);             // On ajoute une 4ème case au tableau qui contient la valeur 8
    tableau.pop_back();               // On supprime une case au tableau
    int const taille(tableau.size()); // la taille d'un tableau
    /*appeler une fonction recevant un vector en argument, il suffit de mettre le nom
    du tableau dynamique comme paramètre entre les parenthèses lors de l'appel*/
    fonction(tableau);
    void fonction(vector<int> const &a) {} // Une fonction recevant un tableau d'entiers en argument
}