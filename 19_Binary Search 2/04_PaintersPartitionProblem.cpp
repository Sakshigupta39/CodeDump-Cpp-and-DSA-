#include <iostream>
#include <vector>
using namespace std;

/* Painter's Parttion problem
You are given an array arr[] of size N, where each element represents the length of a board. You are also given an integer K, representing the number of painters.

Each painter takes 1 unit of time to paint 1 unit length of a board.

📌 Rules
Each painter can paint only contiguous boards
Each board must be painted by only one painter
A painter cannot split a board
All painters work simultaneously 

Find the minimum time required to paint all boards such that the maximum time taken by any painter is minimized*/

bool isPossible(vector<int> &arr, int n ,int k, int mid){
    int painters = 1;
    int CurrSum = 0;

    for(int i=0;i<n;i++){
        if(CurrSum + arr[i] <= mid){
            CurrSum += arr[i];
        }
        else{
            painters++;
            if(painters > k || arr[i] > mid) return false;

            CurrSum = arr[i];
        }
    }
    return true;

}

int allocatePainters(vector<int> &arr, int n ,int k){
    int sum = 0;
    int ans = 0;
    int maxi = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi, arr[i]);
    }

    //Binary search
    int lo = maxi, hi = sum;

    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        
        if(isPossible(arr, n, k, mid)){
            ans = mid;
            hi = mid - 1;   //Right part me to ab sare hi number possible honge, so come to left part
        }
        //Lekin agr possible nhi hua to
        else lo = mid+1;  //Come to right part, shyd yaha ek answer mil jay
    }
    return ans;
    
}

int main(){
    vector<int> arr = {1, 8, 11, 3};
    int k = 2;
    int n = arr.size();
    cout<<"Minimum Possible value : "<<allocatePainters(arr,n,k);

}