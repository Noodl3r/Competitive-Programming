#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, c, total = 1;
  cin >> a >> b >> c;
  int arr[3] = {a, b, c};
  for (int i = 0; i < 5; i++) {
    sort(arr, arr + 3);
    arr[0]++;
  }
  for (int i = 0; i < 3; i++) {
    total *= arr[i];
  }
  cout << total << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
