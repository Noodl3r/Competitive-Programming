#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void solve() {
  int t;
  cin >> t;
  vector<int> nums(t);
  for (int i = 0; i < t; i++) {
    cin >> nums[i];
  }
  if (accumulate(nums.begin(), nums.end(), 0) == t) {
    cout << "YES" << endl;
    return;
  }
  for (int i = 1; i < t; i++) {
    if (nums[i - 1] == 0 and nums[i] == 0) {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}

int main() {
  int tc = 1;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
}
