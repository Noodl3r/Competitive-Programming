#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int tc, total = 0, running = 0;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    int a, b;
    cin >> a >> b;
    running -= a;
    running += b;
    if (total < running) {
      total = running;
    }
  }
  cout << total << endl;
  return 0;
}
