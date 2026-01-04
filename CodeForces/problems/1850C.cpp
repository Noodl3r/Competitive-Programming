#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string final;
  for (int i = 0; i < 8; i++) {
    string temp;
    cin >> temp;
    for (auto x : temp) {
      if (x != '.') {
        final += x;
      }
    }
  }
  cout << final << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++) {
    solve();
  }
  return 0;
}
