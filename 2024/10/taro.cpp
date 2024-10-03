#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> house(M);
    vector<string> child(M);

    for (int i = 0; i<M; i++) {
        cin >> house.at(i) >> child.at(i);
    }

    vector<string> answer(M);
    vector<int> firstSonFlg(N);
    for( int i = 0; i<M; i++) {
        if(child.at(i) == "M" && firstSonFlg[house.at(i)] == 0) {
            answer[i] = "Yes";
            firstSonFlg[house.at(i)] = 1;
        } else {
            answer[i] = "No";
        }
    }

    for (int i = 0; i<M; i++) {
        cout << answer.at(i) << endl;
    }
}
