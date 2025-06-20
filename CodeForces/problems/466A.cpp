#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  int total;
  if (m * a >= b) {
    int cheaper = n / m;
    int expensive = n % m;
    total = cheaper * b + min(expensive * a, b);
  } else {
    total = n * a;
  }

  cout << total << endl;
}
