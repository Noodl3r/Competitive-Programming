#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

void solve() {
  int c1 = 0, c2 = 0, n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (temp == 1)
      c1++;
    else
      c2++;
  }

  int total = c1 + 2 * c2;

  if (total % 2 != 0) {
    cout << "NO" << endl;
    return;
  }
  if (c2 % 2 == 0 || c1 >= 2) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
