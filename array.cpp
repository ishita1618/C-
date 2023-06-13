#include <bits/stdc++.h>
using namespace std;

int main() {

  int num[ 5 ] = {1, 2, 3, 4 ,5 };      //creating array . Array are used to store multiple values in single variable
  cout << "Done";                       // printing output 

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

  int num[ 5 ] = {1, 2, 3, 4, 5 }; //we can access array element by referring to the index number inside square brackets [].
  cout << num[ 2 ];

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

  string mnts[4] = {"Jan", "Feb", " Dec", "Apr"};  //To change the value of a specific element, we can refer to the index number.
  mnts[ 2 ] = "Mar";
  cout << mnts[2];

  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

  string week[4] = {"Monday", "Tuesday", "Wednesday", "Thursday"};   //printing last two elements in diff. lines
  cout << week[ 2 ] << endl;
  cout << week[ 3 ];

  return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {

  int Num[6] = {10, 20, 30, 40, 50,60}; // getting size of array using sizeof() operator.
  cout << sizeof(Num) / 4;

  return 0;
}
