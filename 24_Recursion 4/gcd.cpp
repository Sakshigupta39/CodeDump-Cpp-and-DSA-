#include <iostream>
#include <vector>
using namespace std;
int hcf(int a, int b){  //too many operations
    for(int i=min(a,b);i<=2;i--){
        if(a%i==0 && b%i==0) return i;
    }
    return 1;
}
int gcd(int a, int b){  // less no. of opr
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){

    cout<<gcd(27,45);
}