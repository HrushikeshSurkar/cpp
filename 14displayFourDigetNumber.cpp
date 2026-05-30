#include <iostream>

int main(){
  int number, firstDigit, secondDigit, thirdDigit, fourthDigit;

  std :: cout << "Enter the any 4 digit number :";
  std :: cin >> number;

  // 4321

  firstDigit = number / 1000;
  secondDigit = (number / 100) % 10;
  thirdDigit = (number / 10) % 10;
  fourthDigit = number % 10;


  std :: cout << "Thousand Place Digit  = " << firstDigit << "\n";
  std :: cout << "Hundred Place Digit   = " << secondDigit << "\n";
  std :: cout << "Tenth Place Digit     = " << thirdDigit << "\n";
  std :: cout << "Unit Place Digit      = " << fourthDigit << "\n";
  return 0;
}