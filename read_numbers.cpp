#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {

  while (!std::cin.eof()) {
    std::string line;
    //std::cin >> line;
    std::getline(std::cin, line);


    if (!(line.empty() && std::cin.eof())) {
     // std::cout << line << std::endl;
      int num = atoi(line.c_str());
      
      std::cout << num << std::endl;
    }
  }


  return 0;
}


