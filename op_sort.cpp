#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>

void read_data(std::vector<int> *data_ptr) {
  std::vector<int> &data = *data_ptr;

  while (!std::cin.eof()) {
    std::string line;
    //std::cin >> line;
    std::getline(std::cin, line);


    if (!(line.empty() && std::cin.eof())) {
     // std::cout << line << std::endl;
      int num = atoi(line.c_str());
  
      data.push_back(num);    
//      std::cout << num << std::endl;
    }
  }
}

void print_data(const std::vector<int> &data) {
  for (size_t i = 0; i < data.size(); ++i) {
      std::cout << data[i] << std::endl;
  }
}

bool my_less(const int &lhs, const int &rhs) {
  return lhs % 137 < rhs % 137;
}

void my_sort(
    int* begin,
    int *end,
    bool (*_less)(const int&, const int&)
//    bool(_less)(const int&, const int&)
) {
  std::sort(begin, end, _less);
//  if (!_less(begin[0], begin[1])) {
//    std::swap(begin[0], begin[1]);
//  }
}

int main() {
  std::vector<int> data;

  read_data(&data);
  my_sort(&data[0], &data[0]+data.size(), my_less);
  print_data(data);

  return 0;
}


