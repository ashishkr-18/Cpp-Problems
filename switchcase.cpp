#include <iostream>
using namespace std;
int main()
{
   char button;
   cin>>button;
   switch(button)
   {
      case 'a':
      cout<<"Hello"<<endl;
      break;
      
      case 'b':
      cout<<"Namaste"<<endl;
      break;
      
      case 'c':
      cout<<"Ciao"<<endl;
      break;
      
      case 'd':
      cout<<"Salut"<<endl;
      break;
      
      case 'e':
      cout<<"Hola"<<endl;
      break;
      
      default:
      cout<<"I'm still learning"<<endl;
   }
   return 0;
}