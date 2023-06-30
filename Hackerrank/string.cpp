#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  std::string firstString,secondString;
  std::cin >> firstString;
  std::cin >> secondString;
  
  int firstLength = firstString.size();
  int secondLength = secondString.size();
  std::string bothStrings = firstString + secondString;
  char temp = firstString[0];
  firstString[0] = secondString[0];
  secondString[0] = temp;
  
  std::cout << firstLength <<" " << secondLength << std::endl;
  std::cout << bothStrings << std::endl;
  std::cout << firstString <<" " << secondString <<std::endl;
    return 0;
}