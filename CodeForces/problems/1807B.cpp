#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

// void solve() {
//   int n, evens = 0;
//   cin >> n;
//   vector<int> v(n);
//   for (int i = 0; i < n; i++) {
//     int temp;
//     cin >> temp;
//     if (temp % 2 == 0) {
//       evens++;
//     }
//     v[i] = evens;
//   }
//   sort(v.begin(), v.end(), greater<int>());
//
// }
//
void solve() {
  int n, even_sum = 0, odd_sum = 0;
  cin >> n;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp % 2) {
      odd_sum += temp;
    } else {
      even_sum += temp;
    }
  }
  cout << (even_sum > odd_sum ? "YES" : "NO") << endl;
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
