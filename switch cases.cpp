#include<iostream>
using namespace std;

int main()
{ 
  char button;
  cout << "Input a character: ";
  cin>>button;
  switch (button)
  {
    case 'a':
    cout << "Hello";
    break;
    case 'b':
    cout << "Hi";
    break;
    case 'c':
    cout << "Namaste";
    break;
    case 'd':
    cout << "Hola";
    break;
    default:
    cout <<"I am still learning more!";
    break;
  }
  return 0;

}