#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string a, b, c;
    cin >> a >> b >> c;

    string second = "A";
    if(a == "<" && b == "<" && c == "<") {
        second = "B";
    } else if(a == "<" && b == "<" && c == ">") {
        second = "C";
    } else if(a == "<" && b == ">" && c == "<") { 
        second = "A";
    } else if(a == "<" && b == ">" && c == ">") {
        second = "B";
    } else if(a == ">" && b == "<" && c == "<") {
        second = "A";
    } else if(a == ">" && b == "<" && c == ">") { 
        second = "A";
    } else if(a == ">" && b == ">" && c == "<") {
        second = "C";
    } else if(a == ">" && b == ">" && c == ">") {
        second = "B";
    }
  cout << second << endl;
}
