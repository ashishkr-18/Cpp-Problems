#include<iostream>
using namespace std;
int sum(int n){
   int summation=0;
   for(int i=0; i<=n; i++){
      summation+=i;
   }
   return summation;
}

int main()
{
   int n;
   cin>>n;
   cout<<sum(n);
   return 0;
}