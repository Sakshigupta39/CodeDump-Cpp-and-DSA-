#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Two pointer method
void sort02 (vector <int> &v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    int k = (i+j)/2;
    while(i<j) {
         if(v[i]==2 && v[j]==0){
                v[i]==0;
                v[j]==2;
                i++;
                j--;
            }
         if(v[j]==2) j--;
         if(v[i]==0) i++;
        
            
        }
}

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);


    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
        
     }
    
    cout<<endl;
    sort02(v);
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
        
     }
     cout<<endl;
}
    