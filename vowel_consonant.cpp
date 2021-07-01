#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int lowercase, uppercase;
    lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase || uppercase){
        cout<<c<<" is a vowel";
    }
    else{
        cout<<c<<" is a consonant";
    }
    return 0;
}