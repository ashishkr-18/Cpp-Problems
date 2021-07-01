#include <iostream>
using namespace std;
int main()
{
    int n, i, sum =0;
    cin>>n;
    for(i=0; i<n; i++){
        sum=sum+i;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}