#include <iostream>
#include <cmath>

int main(){
  int num;
  std :: cout << "Enter number : \n";
  std :: cin >> num ;

  std :: cout << "log("<< num <<")" << " is : " << log(num) << "\n";
  std :: cout << "log("<< num <<")" << " is : " << log2(num) << "\n";
  std :: cout << "log("<< num <<")" << " is : " << log10(num);

  return 0;
}