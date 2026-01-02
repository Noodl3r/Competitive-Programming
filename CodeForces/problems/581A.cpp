#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int a, b;
  cin >> a >> b;
  int odd_pairs = min(a, b);
  int even_pairs = (max(a, b) - odd_pairs) / 2;
  cout << odd_pairs << ' ' << even_pairs << endl;
  return 0;
}
