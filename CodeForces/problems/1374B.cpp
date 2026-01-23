#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;
  int n2 = 0, n3 = 0;
  while (n % 2 == 0) {
    n /= 2;
    n2++;
  }
  while (n % 3 == 0) {
    n /= 3;
    n3++;
  }
  if (n == 1 && n2 <= n3) {
    cout << 2 * n3 - n2 << endl;
  } else
    cout << -1 << endl;
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
