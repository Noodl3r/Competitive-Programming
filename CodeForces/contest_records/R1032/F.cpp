#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    ll s, x;
    cin >> n >> s >> x;
    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    ll ans = 0;
    int start = 0;

    for (int i = 0; i <= n; i++) {
      if (i == n || a[i] > x) {
        if (i > start) {
          int len = i - start;
          vector<ll> seg(len);
          for (int j = 0; j < len; j++)
            seg[j] = a[start + j];

          vector<int> posX;
          for (int j = 0; j < len; j++)
            if (seg[j] == x)
              posX.push_back(j);

          if (!posX.empty()) {
            vector<ll> prefix(len + 1, 0);
            for (int j = 0; j < len; j++)
              prefix[j + 1] = prefix[j] + seg[j];

            for (int pos : posX) {
              unordered_map<ll, int> prefixCount;
              for (int idx = 0; idx <= pos; idx++) {
                prefixCount[prefix[idx]]++;
              }

              for (int r = pos; r < len; r++) {
                ll target = prefix[r + 1] - s;
                if (prefixCount.count(target)) {
                  ans += prefixCount[target];
                }
              }
            }
          }
        }
        start = i + 1;
      }
    }

    cout << ans << "\n";
  }

  return 0;
}
