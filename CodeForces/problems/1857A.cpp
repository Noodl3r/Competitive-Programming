#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  bool odd_parity = true;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp % 2) {
      odd_parity = !odd_parity;
    }
  }
  cout << (odd_parity ? "YES" : "NO") << endl;
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
