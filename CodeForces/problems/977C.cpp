#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  if (k == 0) {
    if (v[0] > 1)
      cout << v[0] - 1 << endl;
    else
      cout << -1 << endl;
  }

  else if (k == n)
    cout << v[n - 1] << endl;

  else {
    if (v[k - 1] != v[k])
      cout << v[k - 1] << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
