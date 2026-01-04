#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int x_1 = INT_MAX, x_2 = -INT_MAX, y_1 = INT_MAX, y_2 = -INT_MAX;
  int point = 4;
  while (point--) {
    int tempx, tempy;
    cin >> tempx >> tempy;
    if (tempx <= x_1 && tempy <= y_1) {
      x_1 = tempx;
      y_1 = tempy;
    }
    if (tempx >= x_2 && tempy >= y_2) {
      x_2 = tempx;
      y_2 = tempy;
    }
  }

  cout << abs(x_2 - x_1) * abs(y_2 - y_1) << endl;
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
