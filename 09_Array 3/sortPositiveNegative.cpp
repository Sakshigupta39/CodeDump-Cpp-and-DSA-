#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sort (vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    int temp = 0;
    while(i<j) {
            if(v[i]<v[j]){
                i++;
                j--;
            }
            else if(v[i]>v[j]) {
                v[i] = temp;
                v[j] = v[i];
                temp = v[j];
                i++;
                j--;
            }
            else if(v[i]==v[j]){
                i++;
                j--;
            } 
            
        }
}

int main(){
    vector <int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(-3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(6);

    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
        
    }    
    cout<<endl;
    sort(v);
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
        
     }
    cout<<endl;
}