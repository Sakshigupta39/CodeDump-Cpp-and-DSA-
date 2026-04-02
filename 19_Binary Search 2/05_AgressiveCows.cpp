#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
Aggressive Cows Problem - 
You are given:
An array stalls[] of size n, representing positions of stalls on a line
An integer k, representing number of cows
🎯 Task : Place k cows in the stalls such that:

The minimum distance between any two cows is as large as possible

📌 Important conditions
Each stall can have only one cow
You can place cows only at given stall positions
You need to maximize the minimum distance*/

bool isPossible(vector<int> &arr,int k, int mid){
    int cowCount = 1;
    int firstPos = arr[0]; //place 1st cow

    for(int i =1;i<arr.size();i++){
        if(arr[i] - firstPos >= mid){
            cowCount++;  
            if(cowCount == k) return true;
            firstPos = arr[i];  //update the position for new cow
        } 
        
    }
    return false;
}

int agressiveCows(vector<int> &arr,int k, int n){

    sort(arr.begin(), arr.end());
    //Finding search space - 0 se kaha tak search krenge
    int lo = 0, maxi = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
    }

    int hi = maxi;
    int ans = -1;

    //Binary Search
    while(lo <= hi){
        int mid = lo +(hi-lo)/2;
        if(isPossible(arr, k, mid)){
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid-1;
    }
    return ans;

}

int main(){
    vector <int> arr = {1, 2, 4, 8, 9};
    int k = 3;
    int n = arr.size();

    cout<<agressiveCows(arr, 3, n);

}