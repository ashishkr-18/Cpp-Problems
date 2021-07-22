#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   const int N=1e6+2;
   int idx[N];
   for(int i=0; i<N; i++){
      idx[i]=-1;
   }
   int minindex=INT_MAX;
   for(int i=0; i<n; i++){
      if(idx[arr[i]]!=-1){
         minindex=min(minindex, idx[arr[i]]);
      }else{
         idx[arr[i]]=i;
      }
   }
   if(minindex==INT_MAX){
      cout<<"-1"<<endl;
   }
   else{
      cout<<minindex+1<<endl;
   }
   return 0;
}