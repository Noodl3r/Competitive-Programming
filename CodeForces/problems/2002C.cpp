#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

long long dis(int x1, int y1, int x2, int y2) {
  return 1LL * (x2 - x1) * (x2 - x1) + 1LL * (y2 - y1) * (y2 - y1);
}

void solve() {
  int n;
  cin >> n;
  vector<int> circles(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> circles[i];
  }

  int xs, ys;
  cin >> xs >> ys;
  int xg, yg;
  cin >> xg >> yg;

  long long base_line = dis(xs, ys, xg, yg);

  for (int i = 0; i < 2 * n; i += 2) {
    long long temp_dist = dis(circles[i], circles[i + 1], xg, yg);
    if (base_line >= temp_dist) {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
