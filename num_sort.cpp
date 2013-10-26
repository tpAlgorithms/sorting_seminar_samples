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

int main() {
  std::vector<int> data;

  read_data(&data);
  std::sort(&data[0], &data[0]+data.size());
  print_data(data);

  return 0;
}


