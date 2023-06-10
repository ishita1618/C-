// if else statements 
#include <bits/stdc++.h>
using namespace std;

int main() {

  int r;
  int k;
  r = 24;
  k = 32;
  if (r > k) {                                                   //  if it true it prints otherwise goes to next
    cout << "Ram is heavier than Karan." << endl;
  } else if (r < k) {                                           // if it is true then prints otherwise goes to next
    cout << "Karan is heavier than Ram" << endl;
  }
    else {                                                     //if both the above conditions doesn't fulfill then it prints 
    cout << "Ram & Karan have the same weight!" << endl;
  }
  
  r = 78;                               // other condition if we change the values of r and k
  k = 78;
  if (r > k) {
    cout << "Ram is heavier than Karan.";
  } else if (r < k) {
    cout << "Karan is heavier than Ram";
  }
    else {
    cout << "Ram & Karan have the same weight!";
  }
  
  return 0;
}

// another example 
// conditions in if statements

#include <bits/stdc++.h>
using namespace std;

int main() {

  int a;
  int b;
  int c;
  cin >> a;                                //read a
  cin >> b;                                //read b
  cin >> c;                                //read c
  if (a > c) {
    cout << "Bravo!" << endl;
  } 
  else {
    cout << "Try Again" << endl;
  }

  cin >> a;
  cin >> b;
  cin >> c;
  if (a = c) {
    cout << "Bravo!";
  } 
  else {
    cout << "Try Again";
  }

  return 0;
}
