#include <iostream>
#include <vector>
using namespace std;
void  printArray(vector<int> &arr,int currIndex, int n ){

    if(currIndex==n) return; //base case
    //cout<<arr[currIndex]<<" "; Jab as it is array print karna ho tab
    printArray(arr, currIndex+1, n); //call
    cout<<arr[currIndex]<<" ";  //kaam (Reverse me print krne ke liye)    
}
int main(){
   int n;
   cout<<"Enter no. of elements : ";
   cin>>n;

   vector <int> arr(n);
   for(int i=0; i<n;i++){
    cin>>arr[i];
   }

   printArray(arr,0,n);

}