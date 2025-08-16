#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
   if(sr>er || sc>ec) return 0;
   if(sr==er && sc==ec) return 1;
   int rightways = maze(sr,sc+1,er,ec);
   int downways = maze(sr+1,sc,er,ec);
   int totalWays = rightways+downways;
   return totalWays;
}

int maze2(int row, int col){
   if(row<1 || col<1) return 0;
   if(row==1 && col==1) return 1;
   int rightways = maze2(row, col-1);
   int downways = maze2(row-1, col);
   int totalWays = rightways+downways;
   return totalWays;
}
void printPath(int row, int column, string s){
   if(row<1 || column<1) return;
   if(row==1 && column==1) {  //destination reached
    cout<<s<<endl;
    return;
   }
   printPath(row+1,column,s+'R'); //right
   printPath(row,column+1,s+'D'); //down
}
void printPath2(int sr, int sc, int er, int ec,string s){
   if(sr>er || sc>ec) return;
   if(sr==er && sc==ec) {
      cout<<s<<endl;
      return;
   }
   printPath2(sr,sc+1,er,ec,s+'R'); //right
   printPath2(sr+1,sc,er,ec,s+'D'); //down
   
}
   
int main(){
    //cout<<maze2(3,3);
   printPath2(1,1,3,3,"");
}