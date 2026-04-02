#include <iostream>
#include <vector>
using namespace std;
void  display(int arr[],int n, int idx ){
    if(idx==n) return; //base case
    cout<<arr[idx]<<" "; 
    display(arr,n,idx+1); //call    
}
void  display2(vector<int> &v,int idx ){
    if(idx==v.size()) return; //base case
    cout<<v[idx]<<" "; 
    display2(v,idx+1); //call    
}
int main(){
  int arr[]={2,34,45,45,56,667};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> v(n);
  for(int i=0;i<n;i++){
    v[i]=arr[i];
  }
 // display(arr,n,0);
  display2(v,0);

}