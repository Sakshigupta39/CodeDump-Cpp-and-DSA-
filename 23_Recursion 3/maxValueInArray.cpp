#include <iostream>
#include <vector>
using namespace std;
void  printMax(int arr[],int n, int idx, int max ){
    if(idx==n){
        cout<<max; 
        return;
    } //base case
    if(max<arr[idx]) max= arr[idx];  //kaam
    printMax(arr,n,idx+1,max);      //call
}
int maxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[] ={2,4,56,7,1,2,3,4,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    //printMax(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
}