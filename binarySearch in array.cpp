#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
   int startPoint=0;
   int endPoint=n;
   while(startPoint<=endPoint){
      int mid=(startPoint+endPoint)/2;
      if(arr[mid]==key){
         return mid;
      }else if(arr[mid]>key){
         endPoint=mid-1;
      }else{
         startPoint=mid+1;
      }
   }
   return -1;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int key;
   cin>>key;
   cout<<binarySearch(arr,n,key);
   return 0;
}