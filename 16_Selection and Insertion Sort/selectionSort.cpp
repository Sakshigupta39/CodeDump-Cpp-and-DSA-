#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main(){
    int arr[] = {2,1,4,5,3};
    int n = 5;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    //insertion sort
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        //minimum element calculation in unsorted part
        for (int j=i;j<n;j++){
                if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
}