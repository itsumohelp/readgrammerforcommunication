#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  string a;
  int b;
  a = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
  cin >> b;
  string c;
  c = a.substr(2,b);
  cout << "3." << c << endl;
}
