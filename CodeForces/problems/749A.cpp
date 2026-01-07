#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n;
  cin >> n;

  cout << n / 2 << endl;
  if (n % 2) {
    cout << 3 << ' ';
    n -= 3;
    int temp = n / 2;
    for (int i = 0; i < temp; i++) {
      cout << 2 << ' ';
    }
  } else {
    int temp = n / 2;
    for (int i = 0; i < temp; i++) {
      cout << 2 << ' ';
    }
  }

  return 0;
}
