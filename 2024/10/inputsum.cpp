#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    int tmp = 0;

    cin >> cnt;
    vector<int> v(cnt);
    for ( int i = 0; i < cnt; i++ ) {
        cin >> v.at(i);
    }

    for ( int i = 0; i<cnt; i++) {
        tmp += v[i];
    }
    cout << " phase " << cnt << ":" << tmp << endl;
}
// ./inputsum
// 5
// 11
// 22
// 33
// 44
// 55
// phase 5:165
