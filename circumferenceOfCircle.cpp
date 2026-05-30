#include <iostream>
#define PI 3.14
int main(){
  float r, area;
  std :: cout << "Enter the Radius of the Circle";
  std :: cin >> r;
  area = 2 * PI * r;
  std :: cout >> "Circumference of Circle is : \n">> area;

  return 0 ;
}