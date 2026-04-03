#include <iostream>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int engineSize; 
    int lights;
    virtual void show(){
        cout<<"Vehicle ka show"<<endl;
    }

};
class Bike : public Vehicle { 
    public:
    int handleSize;
    void show(){
       cout<<"Bike ka show"<<endl;   
     }
};


int main(){
    //Bike b;
    Vehicle *a;
    //a = &b;
    a = new Bike;
    a-> show();
    a = new Vehicle;
    a-> show();

    // Vehicle a ;
    // Bike b;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(b)<<endl;
}
