#include <iostream>
using namespace std;
class Player{
    private:
    int score; //data memebers
    int health;
    void showHealth(){ //member functions
        cout<<"Health is :"<<health;
    }
    void showScore(){
        cout<<"Score is"<<score;
    
    }

};
class Calculator{
private:
    int a;
    int b;
public:
    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b;
    }
};
    
int main(){
    // Player sakshi;
    // sakshi.score = 90;
    // sakshi.health = 100;
    // sakshi.showHealth();
    // sakshi.showScore();
    Calculator calci;
    calci.a=39;
    calci.b=87;
    calci.add();
    calci.subtract();
   
} 