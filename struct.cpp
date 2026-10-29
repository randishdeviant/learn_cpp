#include <string>
#include <iostream>

struct Mahasiswa {
  std::string nama;
  int nilai;
};

void tampilkanMahasiswa (Mahasiswa data) {
  std::cout << "Nama: " << data.nama << std::endl;
  std::cout << "Nilai: " << data.nilai << std::endl;
}

int main() {
  Mahasiswa mhs1;

  mhs1.nama = "Budi";
  mhs1.nilai = 85;

  tampilkanMahasiswa(mhs1);
}