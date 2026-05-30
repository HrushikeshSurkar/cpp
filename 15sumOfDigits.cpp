#include <iostream>

int main(){
  int number, firstDigit, secondDigit, thirdDigit, fourthDigit, sumOfDigits;

  std :: cout << "Enter the any 4 digit number :";
  std :: cin >> number;

  // 4321

  firstDigit = number / 1000;
  secondDigit = (number / 100) % 10;
  thirdDigit = (number / 10) % 10;
  fourthDigit = number % 10;

  sumOfDigits = firstDigit + secondDigit + thirdDigit + fourthDigit;

  std :: cout << "Sum of All Four digits of number " << number << "is =" << sumOfDigits;
  return 0;
}