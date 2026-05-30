#include <iostream>
#include <cmath>

int main(){
  int num, square, cube ;
  std :: cout << "Enter number : \n";
  std :: cin >> num ;
  square = pow(num,2);
  cube = pow(num,3);

  std :: cout << "square of " << num << " is : " << square << "\n";
  std :: cout << "cube of " << num <<" is : " <<cube;

  return 0;
}