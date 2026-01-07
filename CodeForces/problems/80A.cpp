#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                     \
  ios::sync_with_stdio(0);                                                                         \
  cin.tie(0);
#define ll long long

const int N = 1e6 + 5;
vector<bool> isPrime(N, true);
void sieve() {
  isPrime[0] = isPrime[1] = false;
  for (int p = 2; p * p < N; p++) {
    if (isPrime[p]) {
      for (int i = p * p; i < N; i += p)
        isPrime[i] = false;
    }
  }
}

int main() {
  fastio;
  sieve();

  int n, m;
  cin >> n >> m;

  for (int i = n + 1; i <= m; i++) {
    if (isPrime[i] && i == m) {
      cout << "YES" << endl;
      return 0;
    }
    if (isPrime[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
