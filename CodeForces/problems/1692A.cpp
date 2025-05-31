#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    int count = 0;
    int first;
    cin >> first;
    for (int l = 1; l <= 3; l++) {
      int var = 0;
      cin >> var;
      if (first < var) {
        count++;
      }
    }
    cout << count << endl;
  }
}
