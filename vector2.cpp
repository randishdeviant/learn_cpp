#include <string>
#include <iostream>
#include <vector>

struct Item {
  std::string nama;
  int harga;
};

int main() {
  std::vector<Item> Inventaris;
  Inventaris.push_back({"Pulpen", 2500});
  Inventaris.push_back({"Buku", 3400});

  for (Item a : Inventaris){
    std::cout << a.nama << " - " << a.harga << std::endl;
  }

  std::cout << "besar vector: " << Inventaris.size() << std::endl;

  Inventaris.insert(Inventaris.begin() + 1, {"Perisai",40000});

  std::cout << "besar vector akhir: " << Inventaris.size() << std::endl;
  
  for (Item a : Inventaris){
    std::cout << a.nama << " - " << a.harga << std::endl;
  }
}