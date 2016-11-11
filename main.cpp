//very simple test

#include <iostream>
#include <string>

void consolePrint(std::string inputString) //"\n" makes it go to next line
{
 std::cout << inputString << "\n";
}

int main()
{
 //the main function code, code will begin to be executed here
 std::cout << "Hello world\n"; //
 consolePrint("Hello world");
 std::cin.get(); //this makes the program pause, waits for you to press enter
  return 0;
}
