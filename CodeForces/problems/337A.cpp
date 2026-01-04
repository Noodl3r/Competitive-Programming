#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, m;
  cin >> n >> m;

  vector<int> v(m);
  for (int i = 0; i < m; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());

  int gap = INT_MAX;
  for (int i = 0; i <= m - n; i++) {
    if (abs(v[i] - v[i + n - 1]) < gap) {
      gap = abs(v[i] - v[i + n - 1]);
    }
  }
  cout << gap << endl;

  return 0;
}
