#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x(-1);

    while (x < 0)
    {
        cout << "Le première valeur " << endl;
        cin >> x;
    }

    cout << "le resultat est : " << x << endl;
}
