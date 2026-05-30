// Simple Interest

// #include <iostream>

// int main(){
//   int principle, rate, time , simpleInterest, TotalAmount;
//   std :: cout << "Enter Principle Amount : \n";
//   std :: cin >> principle ;
//   std :: cout << "Enter rate : \n";
//   std :: cin >> rate ;
//   std :: cout << "Enter duration : \n";
//   std :: cin >> time ;

//   simpleInterest = (principle * rate * time) / 100 ;
//   TotalAmount = principle + simpleInterest ;

//   std :: cout << "simpleInterest : " << simpleInterest << "\n" ;
//   std :: cout << "TotalAmount : " << TotalAmount;

//   return 0;
// }


// Compound interest

#include <iostream>
#include <cmath>

int main(){
  float principle, rate, time , CompoundInterest, TotalAmount;
  std :: cout << "Enter Principle Amount : \n";
  std :: cin >> principle ;
  std :: cout << "Enter rate : \n";
  std :: cin >> rate ;
  std :: cout << "Enter duration : \n";
  std :: cin >> time ;

  CompoundInterest = principle * pow((1 + (rate / 100)),time) - principle;
  TotalAmount = principle + CompoundInterest ;

  std :: cout << "CompoundInterest : " << CompoundInterest << "\n" ;
  std :: cout << "TotalAmount : " << TotalAmount;

  return 0;
}
