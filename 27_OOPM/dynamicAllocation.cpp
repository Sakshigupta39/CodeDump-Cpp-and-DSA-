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

int main(){
    Player sakshi; //object creation, statically
    Player rishit; //compile time, static allocation

    Player *sonakshi = new Player; //runtime, dynamic allocation

    sonakshi->setHealth(20);
    cout<<sonakshi->getHealth()<<endl;

}