#include <iostream>
using namespace std;

class Bike { public:
static int noOfBikes; //static memeber using class
 int tyreSize;
 int engineSize; 

 Bike (int tyreSize, int engineSize){
    this->tyreSize = tyreSize;
    this->engineSize = engineSize;
 }

 static void increaseNoOfBikes(){
    noOfBikes++;
 }

};
//static member using function
// void print(){
//     static int b= 10;
//     cout<<b<<endl;
//     b++;
// }
int Bike ::noOfBikes = 10;
int main(){
    Bike honda(13,150);
    Bike royalfield(15,350);

    royalfield.increaseNoOfBikes();  
    cout<<honda.noOfBikes<<endl;
    cout<<royalfield.noOfBikes<<endl;
    //cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;

    honda.increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<royalfield.noOfBikes<<endl;
    //cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;

    Bike :: increaseNoOfBikes();
    cout<<honda.noOfBikes<<endl;
    cout<<royalfield.noOfBikes<<endl;
}