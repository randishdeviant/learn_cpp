#include <iostream>
#include <string>
#include <vector>

int main() {
  struct Buku {
    std::string judul;
    int tahun;
  };

  std::vector<Buku> pustaka;
  Buku buku1 = {"Belajar C++", 2026};

  pustaka.push_back(
      buku1); // bisa juga pustaka.push_back({"Belajar C++", 2026});
  pustaka.push_back({"Balajar rust", 2026});

  std::cout << pustaka[0].judul << " - " << pustaka.at(0).tahun << "\n\n";

  std::cout << "List buku:\n";
  int i = 1;
  for (Buku p : pustaka) {
    std::cout << i << ". " << p.judul << " - " << p.tahun << "\n";
    i++;
  }
}

void basic() {
  std::vector<std::string> hobi;
  hobi.push_back("Mambaca");
  hobi.push_back("Gaming");

  hobi[0] = "Membaca";

  for (std::string b : hobi) {
    std::cout << b << "\n";
  }
}
