#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  int n, k;
  cin >> n >> k;
  vector<int> fence(n);
  for (auto &x : fence)
    cin >> x;

  int sum = 0;
  for (int i = 0; i < k; i++)
    sum += fence[i];
  int minSum = sum;
  int minPos = 0;

  for (int i = k; i < n; i++) {
    sum += fence[i] - fence[i - k];
    if (sum < minSum) {
      minSum = sum;
      minPos = i - k + 1;
    }
  }
  cout << minPos + 1 << endl;
}
