#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

string adiSoyadiYazdir(string isim, string soyisim) {
  return isim + " " + soyisim;
}

bool karsilastir(bool dogruluk) {
  if (dogruluk == true) {
    return true;
  } else {
    return false;
  }
}

int sayiIsteveHesapla(void){
  int sayi1,sayi2;
  cout << "1.Sayi: "; 
  cin >> sayi1;
  cout << endl;
  cout << "2.Sayi: ";
  cin >> sayi2;
  cout << endl;

  return sayi1 + sayi2;
}



int main(void) {

  setlocale(LC_ALL, "Turkish");

  cout << sayiIsteveHesapla();
   

  
  return 0;
}