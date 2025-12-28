#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  unordered_set<char> final_set;
  char temp;
  while (temp != '}') {
    cin >> temp;
    if (temp != ',' && temp != ' ') {
      final_set.insert(temp);
    }
  }
  cout << final_set.size() - 2 << endl;
}
