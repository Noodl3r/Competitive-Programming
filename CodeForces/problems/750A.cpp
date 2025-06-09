#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int i = 1, n, k, count = 0, total = 240;
  cin >> n >> k;
  total -= k;

  while (total >= i * 5 && count < n) {
    total -= i * 5;
    i++;
    count++;
  }
  cout << count;
}
