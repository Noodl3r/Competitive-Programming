#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, count = 0;
  ;
  cin >> n;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  cout << count;

  return 0;
}
