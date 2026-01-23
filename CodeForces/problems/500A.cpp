#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, t;
  cin >> n >> t;
  vector<int> portals(n - 1);

  for (int i = 0; i < n - 1; i++) {
    cin >> portals[i];
  }

  int curr = 0;
  while (curr < t - 1) {
    curr += portals[curr];
  }
  if (curr == t - 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
