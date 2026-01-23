#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n;
  cin >> n;

  vector<int> v(2 * n);
  for (int i = 0; i < 2 * n; i++) {
    cin >> v[i];
  }

  bool allTheSame = true;
  sort(v.begin(), v.end());
  for (int i = 0; i < 2 * n - 1; i++) {
    if (v[i] != v[i + 1]) {
      allTheSame = false;
      break;
    }
  }
  if (allTheSame) {
    cout << -1 << endl;
  } else {
    for (auto& x : v) {
      cout << x << ' ';
    }
  }

  return 0;
}
