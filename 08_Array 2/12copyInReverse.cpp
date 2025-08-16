#include <iostream>
#include <vector>
using namespace std;

void display(vector <int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}

int main () {
    
    vector <int> v1;
    int n;
    cout<<"Enter array size :";
    cin>>n;
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    
    // bhaiya ka method 
    // for(int i=0;i<=v1.size()-1;i++){
        
    //      cout<<v1[i]<<endl;
    // }  
    // vector<int> v2(v1.size());
    // for(int i=0;i<=v2.size();i++){
    //     v2[i] = v1[v1.size() -1 -i];
    //      cout<<v2[i]<<endl;
    // }


    // Array in reverse without using extra array(2 methods):

    // int i = 0;
    // int j = v1.size()-1;
    // while(i<=j){
    //     //swap v[i] and v[j]
    //     int temp = v1[i];
    //     v1[i] = v1[j];
    //     v1[j] = temp;
    //     i++;
    //     j--;
       
    //     display(v1);
    // }
    for(int i=0,j=v1.size()-1;i<=j;i++,j--){
        
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
    }  
     display(v1);
    
    //khud se kiya
    // for(int i=0;i<=v1.size()-1;i++){
        
    //     cout<<v1[i]<<endl;;
    // }  
    // cout<<endl;  
    //  for(int i=v1.size()-1;i>=0;i--){
       
    //     cout<<v1[i]<<endl;
    //     }

    //Vector me reverse krne ka inbuilt function hai!

    // reverse(v1.begin(),v1.end());
    // display(v1);

}
    
