#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

void solve() {
  int n, k, count = 0;
  string cells;
  cin >> n >> k >> cells;
  for (size_t i = 0; i < cells.length(); i++) {
    if (cells[i] == 'B') {
      count++;
      i += k - 1;
    }
  }
  cout << count << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
