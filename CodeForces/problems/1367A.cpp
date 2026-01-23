#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  string final(2 + (n - 2) / 2, '0');

  final[0] = s[0];
  final[2 + (n - 2) / 2] = s[n - 1];
  int j = 1;
  for (int i = 1; i < 2 + (n - 2) / 2; i++) {
    final[i] = s[j];
    j += 2;
  }
  cout << final << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
  return 0;
}
