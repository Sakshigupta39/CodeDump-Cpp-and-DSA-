#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //printing transpose(column wise printing bhi kehte hain)
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
           cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }   
}