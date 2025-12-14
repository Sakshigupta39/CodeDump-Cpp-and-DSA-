#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of row/column matrix : ";
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //print diagonal elements
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i==j) || (i+j==m-1)) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
}
            