// expected
// *
// *  *
// *  *  *
// *  *  *  *

 #include <iostream>

 int main(){

  int i, j;

  i = 0;
  while(i<=3){
    j = 0;
    while(j<=i){
      std :: cout << " * ";
      j++;
    }
    std :: cout << "\n";
    i++;
  }


  return 0;
 }