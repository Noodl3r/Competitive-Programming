#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int k, n, s, p;
  cin >> k >> n >> s >> p;
  cout << (k * ((n + s - 1) / s) + p - 1) / p << endl;

  return 0;
}
