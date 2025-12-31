#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

bool isodd(int n) {
  return (n % 2);
}

void solve() {
  int n;
  cin >> n;
  int odd_count = 0, even_count = 0;
  for (int i = 0; i < n * 2; i++) {
    int temp;
    cin >> temp;
    isodd(temp) ? odd_count++ : even_count++;
  }

  cout << (odd_count == even_count ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
