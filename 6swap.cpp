// // Using 3rd Var

// #include <iostream>

// int main(){
//   int num1, num2 , temp ;
//   std :: cout<< "Enter tow numbers to swap : \n";
//   std :: cin >> num1 >> num2;
//   std :: cout << "Befor Swap numbers are : " << "\n";
//   std :: cout << "num1 = " <<num1 << "\n";
//   std :: cout << "num2 = " <<num2 << "\n";

//   temp = num1 ;
//   num1 = num2 ;
//   num2 = temp ;

//   std :: cout << "After Swap numbers are : " << "\n";
//   std :: cout << "num1 = " <<num1 << "\n";
//   std :: cout << "num2 = " <<num2 << "\n";


//   return 0;
// }

// Without Using 3rd Var

#include <iostream>

int main(){
  int num1, num2 ;
  std :: cout<< "Enter tow numbers to swap : \n";
  std :: cin >> num1 >> num2;
  std :: cout << "Befor Swap numbers are : " << "\n";
  std :: cout << "num1 = " <<num1 << "\n";
  std :: cout << "num2 = " <<num2 << "\n";

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  std :: cout << "After Swap numbers are : " << "\n";
  std :: cout << "num1 = " <<num1 << "\n";
  std :: cout << "num2 = " <<num2 << "\n";


  return 0;
}
