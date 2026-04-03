#include <iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    
    Cricketer(string name, int runs, float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void change(Cricketer* c){
        c->runs=4500;  //(*c).runs=4500
    }

};
int main(){
    Cricketer c1("Virat Kohli",25000,55.4);
    Cricketer c2 ("Rohit Sharma",18000,47.8);
    Cricketer* p1=&c1;

    // cout<<c1.runs<<endl;
    // c1.change(&c1);
    // cout<<c1.runs<<endl;
    
    cout<<p1->runs<<endl;  //c1.runs
    cout<<c1.avg<<endl;
    p1->avg=77.3;
    cout<<p1->avg<<endl;
}