#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> denoms;
  denoms = {100, 20, 10, 5, 1};
  int count = 0;
  int value;
  cin >> value;

  for (int v : denoms) {
    while (value - v >= 0) {
      value -= v;
      count++;
    }
  }
  cout << count << endl;
}
