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
    Cricketer *c2 = new Cricketer ("Rohit Sharma",18000,47.8);
    

    // int* otr=new int(323);
    // cout<<*otr;
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
}