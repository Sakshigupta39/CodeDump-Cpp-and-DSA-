#include <iostream>
using namespace std;

class Book{
    public:
    char name;
    int price;
    int npages;

    public:
    int countBooks(int n){
        if(price<n)
            return 1;
        else 
            return 0;
    }
    bool isBookPresent(char title){
       
        if(name=title) 
        return true;
        else 
        return false;
    }
};
int main (){
    Book RDPD;
    RDPD.name= 'S';
    RDPD.price= 500;
    RDPD.npages= 300;
    cout<<RDPD.countBooks(1000)<<endl;
    cout<<RDPD.isBookPresent('R ');
}