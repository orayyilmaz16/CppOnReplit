#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;

class Oray{

   public:
      int model;
      string color;

  
  void ModelSorgula(){
    cout << "Araba Modeli: " << model << endl; 
  }

  void RengiSorgula(){
    cout << "Araba rengi:" << color << endl;
  }

         
};


int main(void) {

  setlocale(LC_ALL, "Turkish");

  Oray araba;
  araba.model = 2013;
  araba.color = "Siyah";
  araba.ModelSorgula();
  araba.RengiSorgula();
  cout << endl;
  return 0;
}