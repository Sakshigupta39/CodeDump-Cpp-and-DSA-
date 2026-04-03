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
    void print(){
        cout<<name<<" "<<this->runs<<" "<<avg<<endl;
    }
    int matches(){
        return runs/avg;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000,55.4);
    Cricketer c2 ("Rohit Sharma",18000,47.8);
    c1.print();
    c2.print();
    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl;
}