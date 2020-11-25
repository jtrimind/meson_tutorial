#include <stdio.h>
#include <memory>

int main(int argc, char **argv) {
  auto a = std::make_shared<int>(3);
  // auto a = std::make_unique<int>(3); // (since C++14)
  printf("Hello there. %d\n", *a);
  return 0;
}
