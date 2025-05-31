#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int tc;
  cin >> tc;
  vector<int> nums;
  for (int t = 1; t <= tc; t++) {
    int x;
    cin >> x;
    nums.push_back(x);
  }

  sort(nums.begin(), nums.end());

  for (int x : nums)
    cout << x << ' ';
  cout << endl;
}
