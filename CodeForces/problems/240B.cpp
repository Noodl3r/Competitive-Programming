#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                 \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);

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

bool isPerfectSquare(long long x) {
  long long root = sqrt(x);
  return root * root == x;
}

int main() {
  fastio;

  sieve();

  int n;
  cin >> n;
  while (n--) {
    long long x;
    cin >> x;
    if (isPerfectSquare(x)) {
      long long root = sqrt(x);
      if (isPrime[root])
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    } else
      cout << "NO" << endl;
  }
  return 0;
}
