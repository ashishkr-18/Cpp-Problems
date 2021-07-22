#include<iostream>
using namespace std;
int main()
{
   int n, m, x;
   cin>>n>>m;
   cin>>x;
   int mat[n][m];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin>>mat[i][j];
      }
   }
   bool flag = false;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(mat[i][j]==x){
            flag=true;
         }
      }
   }
   if(flag){
      cout<<"Element found";
   }else{
      cout<<"Element not found";
   }
   return 0;
}