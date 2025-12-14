#include <iostream>
#include <vector>
using namespace std;

void display(vector <int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

void reversePart(int i, int j, vector<int>& v){
        while(i<=j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        return;
    }


int main () {
    
    vector <int> v;
    int n;
    cout<<"Enter array size :";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }

     reversePart(0,2,v);
     display(v);
}