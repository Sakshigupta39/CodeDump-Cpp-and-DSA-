#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m =3;
    int n =3;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int brr[m][n];
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){
            brr[i][j]=arr[i][j];
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(brr[i][j]==0){
                for(int c=0;c<n;c++){
                    brr[i][c]==0;
                }
                for(int r=0;r<m;r++){
                    brr[r][j]==0;
                }
           }
        }        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j];
        }
    }

}