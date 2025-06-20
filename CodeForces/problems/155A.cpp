#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc, first, count = 0;
  cin >> tc >> first;
  int low = first, top = first;
  for (int i = 1; i < tc; i++) {
    int temp;
    cin >> temp;
    if (temp < low) {
      count++;
      low = temp;
    }
    if (temp > top) {
      count++;
      top = temp;
    }
  }
  cout << count << endl;
}
