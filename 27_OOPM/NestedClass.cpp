#include <iostream>
using namespace std;


class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{

    class Helmet{
        int hp;
        int level;
        public:
        void setHp(int hp){
            this-> hp = hp;
        }
        void setLevel (int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

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
    Gun getGun(){
        return gun;
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
    void setGun(Gun gun){
        this->gun = gun; 
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet ->setLevel(level);
        int health = 0;


        if(level == 1) health = 25;
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"error, invalid level!!";
        helmet->setHp(health);
        this->helmet = *helmet;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    }


};

int main(){
    Player sakshi;
    Player rishit;
    Player *sonakshi = new Player;

    Gun akm;
    akm.ammo=100;
    akm.damage=50;
    akm.scope=4;
    sakshi.setGun(akm);
    sakshi.setHelmet(2);

    Gun awm;
    awm.ammo=15; 
    awm.damage=150;
    awm.scope=8;
    rishit.setGun(awm);
    rishit.setHelmet(3);
    Gun gun123 = sakshi.getGun();
    // cout<<gun123.ammo<<endl;
    // cout<<gun123.damage<<endl;
    // cout<<gun123.scope<<endl; 

    rishit.getHelmet(); 
    Player players[3]={sakshi, rishit,*sonakshi};
    cout<<players[0].getAge();
}