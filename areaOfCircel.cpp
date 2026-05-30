#include <iostream>
#define PI  3.14
int main(){
  float r , area;
  std :: cout << "Enter the Radius of Circle : \n";
  std :: cin >> r;
  area = PI * r * r ;
  std :: cout << "Area of circle is : " << area;
  return 0 ;
}