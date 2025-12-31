#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, out_odd = 0, out_even = 0;
  cin >> n;
  vector<int> values(n);

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if (i % 2 == 0 && temp % 2 == 1)
      out_even++;
    else if (i % 2 == 1 && temp % 2 == 0)
      out_odd++;
    values[i] = temp;
  }
  if (out_odd == out_even) {
    cout << out_odd << endl;
  } else {
    cout << -1 << endl;
  }
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
