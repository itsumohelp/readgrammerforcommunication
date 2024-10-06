#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string S, T;
    cin >> S >> T;

    if(S == T) {
        cout << "0" << endl;
        return 0;
    }

    for (int i = 0; i < S.size(); i++) {
        if(S[i] != T[i]) {
            cout << i + 1 << endl;
            break;
        }
        if(i == S.size()-1) cout << S.size() + 1 << endl;
    }
    return 0;
}
