//very simple test

#include <iostream>
#include <string>

void consolePrint(std::string inputString)
{
 std::cout << inputString << "\n";
}

int main()
{
 std::cout << "Hello world\n";
 consolePrint("Hello world");
 std::cin.get();
  return 0;
}
