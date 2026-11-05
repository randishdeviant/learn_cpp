#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

struct Item {
  std::string nama;
  int harga;
};

int main() {
  std::vector<Item> Inventaris = {
    {"Pulpen", 2500},
    {"Buku Tulis", 3500},
    {"Baja Ringan", 25000},
    {"Pensil", 2000}
  };

  auto it = std::find_if(Inventaris.begin(), Inventaris.end(), [](const Item& item) {return item.nama == "Baja Ringan";});

  for (Item p : Inventaris ) {
    std::cout << p.nama << " - " << p.harga;
  }
  
  if (it != Inventaris.end()) {
    std::cout << "Item Baja ringan ditemukan\n";
    Inventaris.erase(it);
  }
}