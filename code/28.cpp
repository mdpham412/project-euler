#include <bits/stdc++.h>

using namespace std;

int main() {
  int res = 1;
  int curNum = 1;
  int additions = 0;
  int curStep = 2;

  while (curStep <= 1000) {
    while (additions < 4) {
      additions++;
      curNum += curStep;
      res += curNum;
    }

    additions = 0;
    curStep += 2;
  }

  cout << res;
}
