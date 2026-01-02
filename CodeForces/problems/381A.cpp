#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, total1 = 0, total2 = 0;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int left = 0, right = n - 1;
  bool turn = true; // True - Serja . False - Dima

  while (left <= right) {
    bool side = v[left] > v[right];
    if (turn) {
      total1 += (side ? v[left] : v[right]);
    } else {
      total2 += (side ? v[left] : v[right]);
    }
    (side ? left++ : right--);
    turn = !turn;
  }
  cout << total1 << ' ' << total2 << endl;
}
