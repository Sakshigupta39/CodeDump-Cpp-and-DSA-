#include <iostream>
using namespace std;

class Bike { public:
 int tyreSize;
 int engineSize; 

//default constructor
// Bike (){
//     cout<<"Constructor called"<<endl;
// }
// paramerterized constructor
// Bike (int tyreSize){
//     this->tyreSize = tyreSize;
//     cout<<"Constructor called"<<endl;
// }

Bike (int tyreSize, int engineSize){
    this->tyreSize = tyreSize;
    this->engineSize = engineSize;
    cout<<"Constructor called"<<endl;
}
~Bike(){
    cout<<"Destructor called"<<endl;
}

};

int main(){
   
    Bike tvs(12,100); //object creation //constructor apneaap call hoga
    Bike honda(13,150);
    Bike royalfield(15,350);
    bool flag = true;
    if(flag == true){
        Bike bmw(17,1000);
        cout<<bmw.tyreSize<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royalfield.tyreSize<<" "<<royalfield.engineSize<<endl;

}
