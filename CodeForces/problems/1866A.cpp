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

  int smallest = INT_MAX;
  while (n--) {
    int temp;
    cin >> temp;
    if (abs(temp) < smallest)
      smallest = abs(temp);
  }
  cout << smallest;
  return 0;
}
