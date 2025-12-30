#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);

int main() {
  fastio;
  std::string guest_name, host_name, letters;
  cin >> guest_name >> host_name >> letters;

  unordered_map<char, int> nameLetters;
  unordered_map<char, int> finalLetters;

  for (auto x : guest_name) {
    nameLetters[x]++;
  }

  for (auto x : host_name) {
    nameLetters[x]++;
  }

  for (auto x : letters) {
    finalLetters[x]++;
  }

  cout << (finalLetters == nameLetters ? "YES" : "NO") << endl;
}
