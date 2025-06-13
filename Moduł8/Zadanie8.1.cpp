#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("dane.txt");
    if (!fin) {
        std::cerr << "Blad otwarcia pliku dane.txt do odczytu!\n";
        return 1;
    }

    std::string imie, nazwisko;
    int wiek;

    
    while (fin >> imie >> nazwisko >> wiek) {
        std::cout << "Imie: " << imie
                  << ", Nazwisko: " << nazwisko
                  << ", Wiek: " << wiek << "\n";
    }

    fin.close();
    return 0;
}
