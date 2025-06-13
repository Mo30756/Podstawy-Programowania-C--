#include <iostream>
#include <fstream>
#include <cstdio>    
#include <string>
#include <limits>

int main() {
    int opcja;
    std::cout << "Wybierz operacje:\n"
                 "1 - Utworz nowy plik\n"
                 "2 - Usun plik\n"
                 "3 - Zmien nazwe pliku\n"
                 "Twoj wybor: ";
    std::cin >> opcja;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (opcja == 1) {
        std::string nazwa;
        std::cout << "Podaj nazwe nowego pliku: ";
        std::getline(std::cin, nazwa);
        std::ofstream fout(nazwa);
        if (fout) {
            std::cout << "Plik '" << nazwa << "' zosta³ utworzony.\n";
        } else {
            std::cerr << "Blad tworzenia pliku '" << nazwa << "'.\n";
        }
    }
    else if (opcja == 2) {
        std::string nazwa;
        std::cout << "Podaj nazwe pliku do usuniecia: ";
        std::getline(std::cin, nazwa);
        if (std::remove(nazwa.c_str()) == 0) {
            std::cout << "Plik '" << nazwa << "' zostal usuniety.\n";
        } else {
            std::cerr << "Blad usuwania pliku '" << nazwa << "'.\n";
        }
    }
    else if (opcja == 3) {
        std::string stara, nowa;
        std::cout << "Podaj nazwe pliku do zmiany: ";
        std::getline(std::cin, stara);
        std::cout << "Podaj nowa nazwe pliku: ";
        std::getline(std::cin, nowa);
        if (std::rename(stara.c_str(), nowa.c_str()) == 0) {
            std::cout << "Plik zostal pomyslnie zmieniony na '" << nowa << "'.\n";
        } else {
            std::cerr << "Blad zmiany nazwy pliku '" << stara << "'.\n";
        }
    }
    else {
        std::cerr << "Nieznana opcja.\n";
    }

    return 0;
}
