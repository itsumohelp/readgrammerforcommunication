#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 10;
    int tmp = 0;
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        int value;
        cin >>  vec.at(i);
    }
  for (int i = 0; i < 5; i ++){
      cout << "Case " << i + 1 << ": " << vec[i] << endl;
  }
  return 0;
}
