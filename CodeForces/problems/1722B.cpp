// Sees Green and Blue the same
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  int length;
  cin >> length;

  string a, b;
  cin >> a >> b;

  for (int i = 0; i < length; i++) {
    if (a[i] == 'G')
      a[i] = 'B';
    if (b[i] == 'G')
      b[i] = 'B';
  }
  cout << (a == b ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
