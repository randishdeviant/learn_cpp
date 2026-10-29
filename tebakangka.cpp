#include <iostream>
#include <random>

using namespace std;

int main(){
  const int angka_minimal = 1;
  const int angka_maksimal = 100;
  int angka_random;
  int angka_tebakan;
  int jumlah_percobaan = 0;

  random_device rd;
  mt19937 gen(rd());

  uniform_int_distribution<> distrib(angka_minimal, angka_maksimal);

  angka_random = distrib(gen);

  cout << "===== Tebak Angka Random 1-100 =====" << endl ;
  while (true){
    cout << "Masukan angka tebakan anda: ";
    cin >> angka_tebakan;

    jumlah_percobaan++;
    
    if(angka_tebakan < angka_random ){
       cout << "Angka anda terlalu kecil" << endl << endl;
    } else if (angka_tebakan > angka_random){
       cout << "Angka anda terlalu besar" << endl << endl;
    } else if (angka_tebakan == angka_random){
       cout << "Selamat anda benar" << endl;
       cout << "Angka random: " << angka_random << endl;
       cout << "Jumlah percobaan menebak: " << jumlah_percobaan;
       break;
    }
  }
  
}