#include <bits/stdc++.h>
using namespace std;

int main() {

  string fruit = "Apple"; 
  // create string 
  
  string x = "Hello";
  string y = "World";

  string txt = "NumeroTres";
   // declare string 

  string wordd = "Programming";
   // outputting character from a string

  string word = "Ocygen"; 
  // changing characters in  a string

  string var = "String"; 
  // declaring string var assign value to it

  string s = "abc"; 
  // declare string s and give value abc

  cout << fruit <<endl;

  cout << x+ " " + y << endl;    
   //addition of two strings , concatenation

  cout << "The length of the word is: " << txt.length() << endl; 
  // we use length() to get length of string 
 
  cout << wordd[ 2 ] ; 
  cout << wordd[ 4 ] << endl;
  // we can access characters in a string by referring index number in []

  word[ 1 ] = 'x'  ;      
  //remember that index begins from 0
  cout << word << endl;     
     // output is printed by changing character in place of c we get x

  cout << var[ 0 ]; 
  // doing string operations by printing the values 
  cout << var[ 1 ];
  cout << var[ 2 ] <<endl;

  s[2] = 'd';
  cout << s ; 
  // printing output of string s in place of c it gives d by indexing

 
  return 0;
}


