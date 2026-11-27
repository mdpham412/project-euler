#include <bits/stdc++.h>

using namespace std;

long long d(int a) {
  long long sum = 0;

  for (int i = 1; i * i <= a; i++) {
    if (a % i == 0) {
      sum += i;
      if (i * i != a) {
        sum += a / i;
      }
    }
  }

  return sum - a;
}

int main() {
  map<long long, int> foundSums;
  unordered_set<int> added;
  int sum = 0;
  for (int a = 1; a < 10000; ++a) {
    int b = d(a);
    if (b > 0 && b != a && d(b) == a) {
      sum += a;
    }
  }
  cout << sum;
}
