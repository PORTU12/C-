#include <iostream>

using namespace std;

int main()
{

    int customer_fruit;
    int fruit_price = 100;

    cout << "Enter your name : " << endl;
    string Name;
    cin >> Name;
    cout << "Combien de fruits voulez-vous ? : " << endl;
    string Gender;
    cin >> Gender;
    cout << "Combien avez-vous pour effectuer cet achat ? : " << endl;
    int Customermoney;
    cin >> Customermoney;

    int cout_achat = fruit_price * customer_fruit;

    int resultat = Customermoney - cout_achat;

    while (Customermoney < cout_achat)
    {
        cout << "Entrez un nouveau montant : " << endl;
    }
    if (Customermoney > cout_achat)
    {
        cout << "Voici vos fruits achetes : " << customer_fruit <<" et votre monnaie : "<< resultat <<endl;
    }
    return 0;
}
