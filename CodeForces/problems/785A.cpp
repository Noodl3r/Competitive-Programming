#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

int main() {
  fastio;
  unordered_map<string, int> shapes = {{"Tetrahedron", 4},
                                       {"Cube", 6},
                                       {"Octahedron", 8},
                                       {"Dodecahedron", 12},
                                       {"Icosahedron", 20}};
  ll tc, total = 0;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    string temp;
    cin >> temp;
    total += shapes[temp];
  }
  cout << total;
}
