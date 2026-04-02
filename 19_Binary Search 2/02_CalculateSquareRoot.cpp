#include <iostream>
#include <vector>
using namespace std;

int sqrt(int number){
    
    int lo=0, hi = number;
    
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(mid * mid == number) return mid;
        else if(mid * mid > number) hi = mid -1;
        else lo = mid+1;
    }
    return -1;

}

double morePrecision(int number, int n, int tempSol){
    double fraction = 1;
    double ans = tempSol;

    for(int i=0;i<n;i++){
        fraction = fraction/10;

        for(double j = ans; j*j < number; j += fraction){
            ans = j;
        }
    }
    return ans;

}

int main(){
    int number = 37;
    int tempSol = sqrt(number);
    cout<<"Square root : "<<morePrecision(number, 3, tempSol);
}