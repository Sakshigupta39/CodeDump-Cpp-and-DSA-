#include <iostream>
#include <vector>
using namespace std;
int printIndex(vector<int> &arr,int currIndex, int n, int key ){

    if (currIndex == 0) return -1;
    if(arr[currIndex] == key) return currIndex;
    return printIndex(arr, currIndex+1, n, key);
}
int main(){
   int n;
   cout<<"Enter no. of elements : ";
   cin>>n;

   vector <int> arr(n);
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }
   printIndex(arr,0,n,1);
}