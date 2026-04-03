#include <iostream>
#include <vector>
using namespace std;

int partition(vector <int> &arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<arr.size();i++){
        if(arr[i] <= pivot) count++;
    }

    int pivotIdx = s + count;

    //place pivot at its desired position
    swap(arr[s], arr[pivotIdx]);

    //handle left and right elements
    int i = s, j = e;
    while(i< pivotIdx && j>pivotIdx){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] >= pivot){
            j--;;
        }

        if(i< pivotIdx && j>pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIdx;
}

void quickSort(vector <int> &arr, int s, int e){
    //basecase
    if(s>=e) return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
}

int main(){
    vector <int> arr = {9,2,6,3,8,7,1,0,4,5};
    int n = arr.size();

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}