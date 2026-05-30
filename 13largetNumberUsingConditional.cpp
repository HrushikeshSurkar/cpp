// a ? true : false;

#include <iostream>

int main(){
  int num1, num2, largest ;
  std :: cout << "Enter any two integer number : \n";
  std :: cin >> num1 >> num2;
  largest = num1 > num2 ? num1 : num2;
  std :: cout << "Largest Number = " << largest;
  return 0;
}