#include <iostream>
using namespace std;

class Ankit;
class Ankush {
    private:
    int money = 10;
    friend void rohit(Ankit, Ankush);
};

class Ankit {
    private:
    int money = 10;
    friend void rohit(Ankit, Ankush);
};


void rohit(Ankit r1, Ankush r2){
    cout<<"Sum = "<<r1.money + r2.money;
}

int main(){
    
    Ankit obj1;
    Ankush obj2;
    rohit(obj1,obj2);
}