#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  int tc = 1;
  cin >> tc;
  vector<int> nums(tc);
  vector<int> even_ind, odd_ind;
  for (int i = 0; i < tc; i++) {
    cin >> nums[i];
    if (nums[i] % 2 == 0) {
      even_ind.push_back(1 + i);
    } else {
      odd_ind.push_back(1 + i);
    }
  }
  if (even_ind.size() == 1) {
    cout << even_ind[0] << endl;
  } else {
    cout << odd_ind[0] << endl;
  }
}
