#include <iostream>
using namespace std;

class Bike { public:
 int tyreSize;
 int engineSize; 
 
 Bike (int tS, int eS): tyreSize(tS), engineSize(eS) {}
 
 };

 int main(){
    Bike honda(13,150);
    Bike royalfield(15,350);

    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engineSize<<endl;
 }