#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  int k, r, count = 1;
  cin >> k >> r;
  long long running_price = k;
  while (1) {
    if (running_price % 10 == 0 || running_price % 10 == r) {
      break;
    }
    running_price += k;
    count++;
  }
  cout << count << endl;
}
