#include <iostream>
#include <string>
using namespace std;

class Vehicle { //Base class, Parent class
    public:
 int tyreSize;
 int engineSize;
 int lights;
 string CompanyName; 
 void showCompany(){
    cout<<CompanyName<<endl;
 }
};
class Car : public Vehicle { //Car inherits vehicle
    public :
    int steeringSize;
};
class Bike : public Vehicle { //Derived class, Child class
    public :
    int handleSize;
    Bike(){
        cout<<"Bike ka comstructor call hua"<<endl;
    }
};
int main(){
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize = 10;
    honda.engineSize = 500;
    honda.CompanyName = "HONDA";
    cout<<honda.tyreSize;
    honda.showCompany();
}
