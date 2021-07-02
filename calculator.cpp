#include <iostream>
using namespace std;
int main()
{
   int num1, num2;
   cin>>num1>>num2;
   
   char op;
   cin>>op;
   switch(op)
   {
      case '+':
      cout<<num1+num2<<endl;
      break;
      
      case '-':
      cout<<num1-num2<<endl;
      break;
      
      case '/':
      cout<<num1/num2<<endl;
      break;
      
      case '*':
      cout<<num1*num2<<endl;
      break;
      
      default:
      cout<<"Enter another operator";
   }
}