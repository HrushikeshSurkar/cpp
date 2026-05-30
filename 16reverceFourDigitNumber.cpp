#include <iostream>

int main(){
  int number, firstDigit, secondDigit, thirdDigit, fourthDigit,reversedNumber;

  std :: cout << "Enter the any 4 digit number :";
  std :: cin >> number;

  firstDigit = number / 1000;
  secondDigit = (number / 100) % 10;
  thirdDigit = (number / 10) % 10;
  fourthDigit = number % 10;


  reversedNumber = (fourthDigit * 1000) + (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

  std :: cout << "reversed Number =" << reversedNumber;
  return 0;
}