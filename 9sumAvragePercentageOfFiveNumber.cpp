#include <iostream>

int main(){
  int num1, num2, num3, num4, num5, sum;
  float average, percentage;

  std :: cout << "Enter 5 numbers : \n";
  std :: cin >> num1;
  std :: cin >> num2;
  std :: cin >> num3;
  std :: cin >> num4;
  std :: cin >> num5;

  sum = num1 + num2 + num3 + num4 + num5 ;
  average = sum / 5.0;
  percentage = (sum / 500.0) *100 ;

  std :: cout << "Sum = "<< sum << "\n Average = "<< average << "\n percentage = "<< percentage;


  return 0;
}