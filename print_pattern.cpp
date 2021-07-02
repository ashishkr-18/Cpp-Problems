#include <iostream>
using namespace std;
int main()
{
   int row, column, i, j;
   cin>>row>>column;
   for(i=0; i<=row; i++){
      for(j=0; j<=column; j++){
         cout<<"*";
      }
      cout<<endl;
   }
   return 0;
}