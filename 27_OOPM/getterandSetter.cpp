#include <iostream>
using namespace std;
class Player{
    private:
    int score; //data memebers
    int health;
public: 
    //setter
    void setScore(int s){
        cout<<"Score set ho rha h"<<endl;
        score = s;
    }
    void setHealth(int h){
        cout<<"Health set ho rhi hai"<<endl;
        health = h;
    }
    //getter
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
};

int main (){
    Player sakshi;
    sakshi.setScore(10);
    sakshi.setHealth(213);
    cout<<sakshi.getScore()<<endl;
    cout<<sakshi.getHealth(); 
}