#include <iostream>

int main(){
  int i , j,k ;
//  *
//  *  *
//  *  *  *
//  *  *  *  *

  for(i = 0; i<=3; i++){
    for(j = 0 ; j<=i;j++){
      std :: cout << " * ";
    }
      std :: cout << "\n";
  }

  std :: cout << "=========================== \n";

//  *  *  *  *
//  *  *  *
//  *  *
//  *
  for(i = 0; i<=3; i++){
    for(j = i ; j<=3;j++){
      std :: cout << " * ";
    }
      std :: cout << "\n";
  }

  std :: cout << "=========================== \n";

  //           *
  //        *  *
  //     *  *  *
  //  *  *  *  *


  for(i=0;i<=3;i++){
    for(k=3;k>i;k--){
      std :: cout<< "   ";
    }
    for(j=i;j>=0;j--){
      std :: cout << " * ";
    }
    std :: cout << "\n";
  }
  std :: cout << "=========================== \n";

//  *  *  *  *
//     *  *  *
//        *  *
//           *

for(i=3;i>=0;i--){

  for(k=3;k>i;k--){
    std :: cout << "   ";
  }

  for(j=i;j>=0;j--){
    std :: cout<<" * ";
  }
  std :: cout << "\n";
}




  return 0;
}