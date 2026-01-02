#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string s1, s2;
  cin >> s1 >> s2;

  cout << s2[0] << s1.substr(1, 2) << ' ' << s1[0] << s2.substr(1, 2) << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
