#include <iostream>

using namespace std;

int main() {
  string nama;
  int umur;
  
  cout << "Masukan nama Anda: ";
  getline(cin, nama);
  cout << "Masukan umur Anda: ";
  cin >> umur;

  cout << "Halo, " << nama << endl;
  
  if (umur < 0){
    cout << "Umur Anda tidak valid";
  }else if(umur <= 18){
    cout << "Anda terlalu muda";
  } else if (umur > 18 && umur < 25){
    cout << "Anda memenuhi kriteria";
  } else {
    cout << "Anda terlalu tua";
  }

  return 0;
}