#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

bool is_prime(int x) {
  if (x <= 1) {
    return false;
  }
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}
void solve() {
  int x, k;
  cin >> x >> k;
  if (k >= 2 && x > 1) {
    cout << "NO" << endl;
    return;
  } else if (k == 1) {
    if (is_prime(x)) {
      cout << "YES" << endl;
    } else
      cout << "NO" << endl;
  } else
    cout << ((k == 2) ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
