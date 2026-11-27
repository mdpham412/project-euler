#include <bits/stdc++.h>
using namespace std;

int triHeight = 100;

vector<vector<int>> test(triHeight);

int main() {
  freopen("67.txt", "r", stdin);

  for (int height = 0; height < triHeight; height++) {
    vector<int> temp(height + 1);

    for (int i = 0; i <= height; i++) {
      cin >> temp[i];
    }

    test[height] = temp;
    temp.clear();
  }

  for (int height = triHeight - 2; height >= 0; height--) {
    for (int i = 0; i <= height; i++) {
      test[height][i] += max(test[height + 1][i], test[height + 1][i + 1]);
    }
  }

  cout << test[0][0];
}
