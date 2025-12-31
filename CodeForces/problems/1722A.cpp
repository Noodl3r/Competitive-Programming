#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

void solve() {
  int n;
  string input;
  cin >> n >> input;
  if (n != 5) {
    cout << "NO" << endl;
    return;
  }

  unordered_set<char> timur = {'T', 'i', 'm', 'u', 'r'};
  unordered_set<char> input_test(n);
  for (auto x : input) {
    input_test.insert(x);
  }
  cout << (input_test == timur ? "YES" : "NO") << endl;
}

int main() {
  fastio;
  int tc;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    solve();
  }
  return 0;
}
