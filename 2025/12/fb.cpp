#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    for (int i = 0; i < a ; i++) {
       if(i % 2 ==  0 && i % 3 == 0)
            cout << i << " fb " << endl;
        else if(i % 3 == 0)
            cout << i <<  " f" << endl;
        else
            cout << i <<  " b " << endl;
    }
    cout << " end of code" << endl;
}
