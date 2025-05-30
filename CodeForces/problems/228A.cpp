#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  set<int> rings;
  for (int i = 0, x; i < 4; i++) {
    cin >> x;
    rings.insert(x);
  }
  cout << 4 - rings.size() << endl;
}
