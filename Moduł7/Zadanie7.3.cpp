#include <iostream>
#include <string>

struct Samochod {
    std::string marka;
    std::string model;
    int rok_produkcji;
};

void WyswietlDane(const Samochod &s) {
    std::cout << "Dane samochodu:\n";
    std::cout << "Marka: " << s.marka << "\n";
    std::cout << "Model: " << s.model << "\n";
    std::cout << "Rok produkcji: " << s.rok_produkcji << "\n";
}

int main() {
    Samochod car = {"Mitsubishi", "Lancer", 2011};
    WyswietlDane(car);
    return 0;
}
