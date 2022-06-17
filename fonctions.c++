#include <iostream>
using namespace std;

void dessin(int i, int h){
    for (int colon(0); colon < h; colon++){
        for (int ligne(0); ligne < h; ligne++){
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int larg, haut;
    cout << "entrez la largeur du rectangle : ";
    cin >> larg;
    cout << "entrez la hauteur : ";
    cin >> haut;

    dessin(larg, haut);
    return 0;
}