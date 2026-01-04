#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  cin >> n;

  map<int, int> numbers;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    numbers[temp]++;
  }
  if (numbers.size() > 2) {
    cout << "NO" << endl;
    return;
  } else if (numbers.size() == 1) {
    cout << "YES" << endl;
    return;
  } else {
    if (std::abs(numbers.begin()->second - numbers.rbegin()->second) <= 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 0; t < tc; t++) {
    solve();
  }
  return 0;
}
