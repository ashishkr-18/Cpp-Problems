#include<iostream>
using namespace std;
int main()
{
   int row, column, i, j;
   cin>>row>>column;
   int arr[row][column];
   for(i=0; i<row; i++){
      for(j=0; j<column; j++){
         cin>>arr[i][j];
      }
   }
   int x;
   cin>>x;
   bool flag=false;
   for(i=0; i<row; i++){
      for(j=0; j<column; j++){
         if(arr[i][j]==x){
            cout<<i<<" "<<j;
            flag=true;
         }
      }
   }
   if(flag){
      cout<<"Element is found"<<endl;
   }else{
      cout<<"Element is not found"<<endl;
   }
   return 0;
}