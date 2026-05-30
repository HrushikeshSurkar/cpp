#include <iostream>

int main(){
  // Da = 25% , Ta = 10% , HRA = 20% ;
  float baseSalary, dearnessAllowance, HouseRentAllowance, travelAllowance, netSalary;

  std :: cout << "Enter Base Salary = \n";
  std :: cin >> baseSalary ;
  dearnessAllowance = (baseSalary * 25) / 100.0;
  travelAllowance = (baseSalary * 10) / 100.0;
  HouseRentAllowance = (baseSalary * 20) / 100.0;

  netSalary = baseSalary + dearnessAllowance + travelAllowance + HouseRentAllowance ;

  std :: cout << "Dearness Allowance = \n"<< dearnessAllowance <<"\n";
  std :: cout << "Travel Allowance = \n"<< travelAllowance <<"\n";
  std :: cout << "House Rent Allowance = \n"<< HouseRentAllowance <<"\n";
  std :: cout << "Net Salary = "<< netSalary;

  return 0;
}