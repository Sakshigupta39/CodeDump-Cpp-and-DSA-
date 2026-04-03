#include <iostream>
using namespace std;

class Vehicle{
    public:
    int tyreSize;
    int engineSize; 
    int lights;
    virtual void calculateMileage() = 0;
    virtual void refuel()= 0;

};
class Bike : public Vehicle { 
    public:
    int handleSize;
    void calculateMileage(){
       cout<<"Bike ka show"<<endl;   
     }
     void refuel(){
        cout<<"Refuel"<<endl;
     }
};

int main(){
    Bike b;
    b.calculateMileage();
    
}