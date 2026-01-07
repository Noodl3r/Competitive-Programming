#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int y, w;
  cin >> y >> w;
  int largest = max(y, w);
  int good = 7 - largest;

  int g = gcd(good, 6);

  cout << good / g << '/' << 6 / g << endl;
  return 0;
}
