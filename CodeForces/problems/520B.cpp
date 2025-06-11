#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, m;
  cin >> n >> m;

  int pushes = 0;

  while (m > n) {
    if (m % 2 == 0) {
      m /= 2;
    } else {
      m += 1;
    }
    pushes++;
  }

  pushes += (n - m);
  cout << pushes << endl;
}
