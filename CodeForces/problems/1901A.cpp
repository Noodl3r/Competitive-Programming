#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n, x, prev, capacity;
  cin >> n >> x >> prev;
  n--;
  capacity = prev;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp - prev > capacity) {
      capacity = temp - prev;
    }
    prev = temp;
  }
  if (x - prev > capacity) {
    capacity = x - prev;
  }
  cout << capacity << endl;
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
