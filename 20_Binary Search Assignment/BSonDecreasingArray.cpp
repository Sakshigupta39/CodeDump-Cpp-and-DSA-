#include <iostream>
using namespace std;
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n = 9;
    int x = 8;

    int lo = 0;
    int hi= n-1;
    bool flag = false;
    int mid = lo+(hi-lo)/2;

    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid==x){
             flag = true;
            cout<<mid;
            break;
        } 
        else if(mid<x) hi = mid-1;
        else lo = mid+1;
    }
    return mid;
}
