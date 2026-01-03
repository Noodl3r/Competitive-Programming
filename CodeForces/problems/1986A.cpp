#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  //median!
  int arr[3] = {a, b, c};
  sort(arr, arr + 3);
  int median = arr[1];
  cout << (abs(arr[0] - median) + abs(arr[1] - median) + abs(arr[2] - median)) << endl;
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
