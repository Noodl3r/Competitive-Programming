#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int tc, count = 0, best = 0, prev = -1;
  cin >> tc;
  vector<int> a(tc);
  for (int t = 0; t < tc; t++) {
    cin >> a[t];
  }

  for (auto x : a) {
    if (x > prev) {
      count++;
      if (count > best)
        best = count;
    } else {
      count = 1;
    }
    prev = x;
  }

  cout << best << endl;

  return 0;
}
