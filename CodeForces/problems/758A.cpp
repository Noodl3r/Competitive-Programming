#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int tc, max = -1, total = 0;
  cin >> tc;

  vector<int> a(tc);
  for (int t = 0; t < tc; t++) {
    cin >> a[t];
    if (a[t] > max)
      max = a[t];
  }

  for (auto x : a) {
    total += max - x;
  }
  cout << total << endl;
}
