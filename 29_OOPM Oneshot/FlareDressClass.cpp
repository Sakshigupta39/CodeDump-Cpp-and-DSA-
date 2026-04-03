#include <iostream>
using namespace std;

class Flared{
    public:
    int cost;
    int size;
    string colour;
    string lenght;
    float custRating;

    Flared(){
        //default constructor
        //ye pehle se hi exist karta ha class me
    }
    // agar ham explicitly koi constructor banate hain to default vala agayab ho jata aur hame fir is tarike se show krna padta h taki ham dono tarah se initialize kar ske values !

    Flared(int c, int s, string clr, string l, float r){ 
        //expicitly made constructor
        //parameterised costructor
        cost = c;
        size = s;
        colour = clr;
        lenght = l;
        custRating = r;
    }

};
void print(Flared d){
        cout<<d.cost<<" "<<d.size<<" "<<d.colour<<" "<<d.lenght<<" "<<d.custRating<<endl;    
    }
int main(){
    Flared fit(500,34,"wine","knee",4.5);
    //Flared out(620,32,"yellow","full",4.3);
    print(fit);
    //agr default constructor ko mention kr diya toh is tarah se bhi initialze kr skte h
    Flared out;
    out.cost=500;
    out.size=32;
    out.colour="black";
    out.lenght="full";
    out.custRating= 4.2;
    print
    

}