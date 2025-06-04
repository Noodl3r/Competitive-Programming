#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

int main() {
  fastio;
  string original, temp;
  cin >> original;
  for (size_t i = 0; i < original.length(); i++) {
    if (isdigit(original[i])) {
      temp.push_back(original[i]);
    }
  }
  sort(temp.begin(), temp.end());
  for (size_t i = 1; i < temp.length(); i += 2) {
    temp.insert(i, 1, '+');
  }
  cout << temp;
}
