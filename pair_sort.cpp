#include <algorithm>
#include <cstdio>
//#include <iostream>
#include <vector>

struct pair_t {
  int a;
  int b;
};

bool less(const pair_t &lhs, const pair_t &rhs) {
  return (lhs.a + lhs.b) < (rhs.a + rhs.b);
}

int main() {
  std::vector<pair_t> data;

  while (true) {
    pair_t pair;
    if (scanf("%d %d", &pair.a, &pair.b) != 2) {
      break;
    }
    data.push_back(pair);
  }

  std::sort(data.begin(), data.end(), less);

  for (size_t i = 0; i < data.size(); ++i) {
    pair_t &pair = data[i];
    printf("%d %d\n", pair.a, pair.b);
  }

  return 0;
};

