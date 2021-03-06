#include <iostream>
#include <string>

#include "boost/algorithm/string.hpp"

using namespace boost;

int main(int argc, char *argv[]) {
  auto line = "0,1,2,3";
  std::vector<std::string> elems;
  split(elems, line, is_any_of(","));

  for (const auto e : elems) {
    std::cout << e << " " << std::stoi(e) << std::endl;
  }
  return 0;
}
