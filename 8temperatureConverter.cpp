// // Temperature Celsius to Fahrenheit
// #include <iostream>

// int main(){
//   float celsius ,fahrenheit;
//   std :: cout << "Enter Temperature in degree Celsius : \n";
//   std :: cin >> celsius;
//   fahrenheit =(celsius * 1.8) + 32.0;
//   std :: cout << "Temperature in degree Fahrenheit = " << fahrenheit ;
//   return 0;
// }


// Temperature Fahrenheit to Celsius
#include <iostream>

int main(){
  float celsius ,fahrenheit;
  std :: cout << "Enter Temperature in degree Fahrenheit : \n";
  std :: cin >> fahrenheit;
  celsius = (fahrenheit - 32.0) / 1.8;
  std :: cout << "Temperature in degree Celsius = " << celsius ;
  return 0;
}