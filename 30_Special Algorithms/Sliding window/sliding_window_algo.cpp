#include <iostream>
using namespace std;

int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxIdx = -1;
    int sum = 0;

    // find sum of first window
    for(int i=0;i<k;i++){  ///tno = k
        sum += arr[i];
    }

    int maxSum = sum;
    //Sliding window algorithm
    int i = 1, j = k;
    while(j<n){   //tno = n-k
        sum = sum + arr[j] - arr[i-1];
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
    cout<<maxIdx;
    //T.C = O(n)
}