#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    long long n;
    cin >> n;
    for (int k = 2;; ++k) {
      long long s = (1LL << k) - 1;
      if (n % s == 0) {
        cout << n / s << endl;
        break;
      }
    }
  }
}
