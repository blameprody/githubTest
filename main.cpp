//very simple test

#include <iostream>
#include <string>

void consolePrint(std::string inputString) //this functions prints something to the screen
{
 std::cout << inputString << "\n";
}


//this is the main fuinction
int main()
{
 std::cout << "Hello world\n";
 consolePrint("Hello world");
  return 0;
}
