#include <iostream>
#include <climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of 1st matrix : ";
    cin>>m;
    int n;
    cout<<"Enter columns of 1st matrix : ";
    cin>>n;
    int p;
    cout<<"Enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"Enter columns of 2nd matrix : ";
    cin>>q;
    if(n==p){
        int arr[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int brr[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
            }
        }
        cout<<endl;
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //multiply
                for(int k=0;k<q;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        cout<<endl;
        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){  
                cout<<res[i][j]<<" ";    
            }
        }
        cout<<endl;
    }
    else{ //n!=p
        cout<<" ERROR!! matrix cannot be multipied";
    }
}