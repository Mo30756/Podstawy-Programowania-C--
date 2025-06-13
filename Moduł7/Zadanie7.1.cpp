#include <iostream>
#include <string>

struct Osoba {
    std::string imie;
    std::string nazwisko;
    int wiek;
};

int main() {
    Osoba osoba = {"Jan", "Kowalski", 37};

    std::cout << "Dane przed modyfikacja:\n";
    std::cout << "Imie: " << osoba.imie
              << ", Nazwisko: " << osoba.nazwisko
              << ", Wiek: " << osoba.wiek << "\n\n";

    // Zmiana wieku
    osoba.wiek = 45;

    std::cout << "Dane po modyfikacji:\n";
    std::cout << "Imie: " << osoba.imie
              << ", Nazwisko: " << osoba.nazwisko
              << ", Wiek: " << osoba.wiek << "\n";
    return 0;
}
