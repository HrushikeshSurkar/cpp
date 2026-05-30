//  For x y input evaluate value of z
//  z = 2x^2 + 5y^2 + 6xy + 5 ;

#include <iostream>

int main(){
  int x, y, z ;
  std :: cout << "Enter The value of x and y :";
  std :: cin >> x >> y;
  z = (2 * x * x) + (5 * y * y) + (6 * x * y) + 5;
  std :: cout << "z = 2x^2 + 5y^2 + 6xy + 5 : \n" << z;
  return 0;
}