#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter no. of rows/columns : ";
    cin>>m;
    int arr[m][m];
    //input
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //store transpose in arr itself
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
           //swapping
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]= temp;
 
        }
    }
    cout<<endl;
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}