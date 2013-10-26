#include <iostream>

int main() {

  while (!std::cin.eof()) {
    std::string line;
    //std::cin >> line;
    std::getline(std::cin, line);

    if (!(line.empty() && std::cin.eof()))
      std::cout << line << std::endl;
  }


  return 0;
}


