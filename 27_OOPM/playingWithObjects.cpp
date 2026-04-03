#include <iostream>
using namespace std;

class Player{
    int health;
    int age;
    int score;
    bool alive;
public :
    int getHealth(){
        return health;
    }

    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }

    int getAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health= health;
    }

    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }

    void setAlive(bool alive){
        this->alive = alive;

    }


};
    int addScore(Player a,Player b){
        return a.getScore()+b.getScore();
    }
    Player getMaxScorePlayer(Player a,Player b){
        if(a.getScore()>b.getScore())
        return a;
        else return b;
    }
int main(){
    Player sakshi; //object creation, statically
    Player rishit; //compile time, static allocation


    sakshi.setAge(23);
    sakshi.setAlive(true);
    sakshi.setHealth(98);
    sakshi.setScore(44);

    rishit.setAge(233);
    rishit.setAlive(true);
    rishit.setHealth(938);
    rishit.setScore(424);


    cout<<addScore(sakshi, rishit)<<endl;
    Player shruti = getMaxScorePlayer(sakshi,rishit);
    cout<<shruti.getScore()<<endl;
    cout<<shruti.getHealth();
}