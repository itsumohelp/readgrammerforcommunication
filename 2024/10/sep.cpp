#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 12;

    vector<string> v(cnt);
    for (int i = 0; i<cnt; i++) {
        cin >> v.at(i);
    }

    int answer = 0;
    for (int i = 0; i<cnt; i++) {
        if(i == v[i].length() - 1) answer += 1;
    }
    cout << answer << endl;
}
