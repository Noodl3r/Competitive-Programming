#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, m, total = 0;
  cin >> n;
  vector<int> totals(n);
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    total += val;
    totals[i] = total;
  }

  cin >> m;

  while (m--) {
    int q;
    cin >> q;
    int pile = lower_bound(totals.begin(), totals.end(), q) - totals.begin();
    cout << pile + 1 << endl;
  }
  return 0;
}
