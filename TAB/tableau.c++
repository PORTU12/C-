#include <iostream>
#include <cmath>
using namespace std;
// Notes de l'année

int main()
{
int const nombresdenotes(7); 
double notes[nombresdenotes];
double moyenne(0);

notes[0] = 11.5;
notes[1] = 12.5; 
notes[2] = 9.5; 
notes[3] = 15;
notes[5] = 13;
notes[6] = 13;

 
for (int i=0; i<nombresdenotes; ++i){
    moyenne += notes[i];
}
moyenne /= nombresdenotes;

cout<< "votre moyenne est : " << moyenne <<endl;

return 0;

}
