#include <iostream>
#include <string>

struct Akun {
  std::string namaLengkap;
  std::string email;
};

void cekDomainEmail(const Akun &p) {
  if (p.email.find("@gmail.com") != std::string::npos) {
    std::cout << "Email Anda valid";
  } else {
    std::cout << "Email Anda tidak valid";
  }
}

int main() {
  Akun akun1;

  std::cout << "Masukkan nama Anda: ";
  std::getline(std::cin, akun1.namaLengkap);
  std::cout << "Masukkan email Anda: ";
  std::getline(std::cin, akun1.email);

  cekDomainEmail(akun1);
}
