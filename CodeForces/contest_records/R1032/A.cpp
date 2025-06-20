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
    int n, s;
    cin >> n >> s;
    vector<int> positions(n);
    for (auto &x : positions) {
      cin >> x;
    }
    int min_x = positions[0];
    int max_x = positions[n - 1];
    cout << (max_x - min_x) + min(abs(s - min_x), abs(s - max_x)) << endl;
  }
}
