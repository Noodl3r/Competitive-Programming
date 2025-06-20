#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        cin >> a[i][j];

    int ans = 1e9;
    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        int mx = 0;
        for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
            int val = a[i][j];
            if (i == r || j == c)
              val--;
            mx = max(mx, val);
          }
        }
        ans = min(ans, mx);
      }
    }
    cout << ans << endl;
  }
}
