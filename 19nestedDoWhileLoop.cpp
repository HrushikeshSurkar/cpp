// expected
// #
// #  #
// #  #  #
// #  #  #  #

#include <iostream>
int main(){
  int i, j;

  i=0;
  do{
    j=0;
    do{
      std :: cout << " # ";
      j++;
    }while(j<=i);
    std :: cout << "\n";
  i++;
  }while(i<=3);

  return 0;
}