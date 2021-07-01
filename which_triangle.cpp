#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"This is a equilateral"<<endl;
    }
    else if(a==b || a==c || b==c){
        cout<<"This is isosceles"<<endl;
    }
    else{
        cout<<"This is scalene"<<endl;
    }
    return 0;
}