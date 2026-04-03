#include <iostream>
using namespace std;

class Bike { public:
 int tyreSize;
 int engineSize; 
 
 //constructor overloading
 Bike (int tS, int eS): tyreSize(tS), engineSize(eS) {}
 Bike (int tS): tyreSize(tS), engineSize(100) {}
 Bike (): tyreSize(12), engineSize(100) {}

    void add(int a, int b){
        cout<<a+b<<endl;
    }

    void add(int a, double b){
        cout<<a+b<<endl;
    }
};

int main(){
    Bike honda(13,150);
    Bike royalfield(15);
    Bike bajaj(46);
    Bike tvs;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    
    
}