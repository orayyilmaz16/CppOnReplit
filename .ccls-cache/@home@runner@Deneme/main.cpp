#include <iostream>
#include <math.h>
using namespace std;

int tekSayiYazdir(int value) {
  for(int i=0;i<=value;i++){
    if(i%2==1){
      cout<<i<<endl;
    }
  }
  return 0;
}



int main(void) {

  setlocale(LC_ALL,"Turkish");

  return 0;
}