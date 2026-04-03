#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr, int s, int e){
    int mid = s +(e-s)/2;

    //calculate length
    int len1 = mid - s + 1;
    int len2 = e - mid ;

    vector <int> first(len1);
    vector <int> second(len2);

    //copy values
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted arrays
    int index1 = 0, index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){  //Compare dono me se konsa chota h vahi vala array me add krte jao
        if(first[index1] < second[index2]){
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else{
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }

    while(index1 < len1){ //at last agr first array k elements bache h to usko pura khali krdo
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){  //at last agr second array k elements bache h to usko pura khali krdo
        arr[mainArrayIndex++] = second[index2++];
    }


}

void mergeSort(vector <int> &arr, int s, int e){
    //basecase
    if(s>=e) return;

    int mid = s+ (e-s)/2;  //break the array in two parts

    //sort leftpart
    mergeSort(arr, s, mid);

    //sort rightPart
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);   //merge them
}

int main(){
    vector <int> arr = {9,2,6,3,8,7,1,0,4,5};
    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}