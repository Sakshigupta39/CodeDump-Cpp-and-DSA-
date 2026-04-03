#include <iostream>
#include <string>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int engineSize; 
    int lights;
    string companyName;
    Vehicle(){
        cout<<"Vehicle constructor called"<<endl;
    }
    void showCompany(){
        cout<<companyName<<endl;
    }

};
class Bike : public Vehicle { 
    public:
    int handleSize;
    Bike(){
        cout<<"Bike constructor called"<<endl;
    }
};


int main(){
    Bike honda;
    honda.handleSize = 5;
    honda.tyreSize = 10;
    honda.engineSize = 500;
    honda.companyName = "Honda";
    cout<<honda.tyreSize<<endl;
    honda.showCompany();
}
