#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  int n, k, count = 0;
  cin >> n >> k;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp + k <= 5) {
      count++;
    }
  }

  cout << count / 3 << endl;
  return 0;
}
