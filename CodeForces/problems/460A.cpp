#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  int n, m, days = 0;
  ;
  cin >> n >> m;
  int sock_count = n;
  while (sock_count) {
    days++;
    if (days % m == 0) {
      sock_count++;
    }
    sock_count--;
  }
  cout << days << endl;
}
