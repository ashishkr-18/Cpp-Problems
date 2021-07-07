#include<iostream>
using namespace std;
int main()
{
   int n, arr[n];
   cin>>n;
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int mx=-999999;
   for(int i=0; i<n; i++){
      mx=max(mx, arr[i]);
      cout<<mx<<endl;
   }
   return 0;
}