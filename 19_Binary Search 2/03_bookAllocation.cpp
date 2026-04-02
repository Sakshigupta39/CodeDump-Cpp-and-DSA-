#include <iostream>
#include <vector>
using namespace std;

/* Book Allocation Problem 
You are given an array arr[] of size N, where each element represents the number of pages in a book. You are also given an integer M, representing the number of students.

Your task is to allocate books to students such that:

Each student gets at least one book
Each book is allocated to only one student
Books must be allocated in contiguous order
The goal is to minimize the maximum number of pages assigned to any student */

bool isPossible(vector<int> &arr, int n ,int m, int mid){
    int studentCount = 1;
    int noOfPages = 0;

    for(int i=0;i<n;i++){
        if(noOfPages + arr[i] <= mid){
            noOfPages += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid) return false;

            noOfPages = arr[i];
        }
    }
    return true;

}

int allocateBooks(vector<int> &arr, int n ,int m){
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int lo = 0, hi = sum;
    while(lo<=hi) {
        int mid = lo + (hi-lo)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            hi = mid - 1;   //Right part me to ab sare hi number possible honge, so come to left part
        }
        //Lekin agr possible nhi hua to
        else lo = mid+1;  //Come to right part, shyd yaha ek answer mil jay
    }
    return ans;
    
}

int main(){
    vector<int> arr = {12, 34, 67, 90};
    int m = 2;
    int n = 4;

    cout<<"Minimum Possible value : "<<allocateBooks(arr,n,m);

}