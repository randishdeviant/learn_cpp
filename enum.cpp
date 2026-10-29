#include <iostream>
#include <string>

enum class KondisiKarakter {
  SEHAT,
  LUKA,
  PINGSAN
};

struct Karakter {
  std::string nama;
  KondisiKarakter status;
};

void tampilkanStatus(const Karakter& p) {
  std::string kondisi;
  if (p.status == KondisiKarakter::SEHAT) {
    kondisi = "sehat wal afiat";
  } else if (p.status == KondisiKarakter::LUKA) {
    kondisi = "terluka";
  } else {
    kondisi = "pingsan";
  }
  
  std::cout << p.nama << " dalam kondisi " << kondisi;
}

int main(){
  Karakter budi;
  budi.nama = "Budi";
  budi.status = KondisiKarakter::LUKA;

  tampilkanStatus(budi);
}