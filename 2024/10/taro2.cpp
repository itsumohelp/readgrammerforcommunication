#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> taro(N+1);

    for (int i = 0; i<M; i++) {
        int a;
        char b;
        cin >> a >> b;

        if( b == 'F') {
            cout << "No" << endl;
        } else {
            if((taro[a])) cout << "No" << endl;
            else {
                cout << "Yes" << endl;
                taro[a] = true;
            }

        }
    }
    return 0;
}
