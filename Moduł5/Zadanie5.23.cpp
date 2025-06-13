#include <iostream>

int main() {
    const int MAX = 100;
    char tekst[MAX];
    char szuk;

    std::cout << "Podaj ciag znakow (max 99 znakow): ";
    std::cin.getline(tekst, MAX);
    std::cout << "Podaj znak do zliczenia: ";
    std::cin >> szuk;

    int licznik = 0;
    std::cout << "\nPozycje wystapien znaku '" << szuk << "': ";
    for(int i = 0; tekst[i] != '\0'; ++i) {
        if(tekst[i] == szuk) {
            ++licznik;
            std::cout << i << (tekst[i+1] ? ", " : "");
        }
    }
    std::cout << "\nLiczba wystapien znaku '" << szuk << "': "
              << licznik << "\n";
    return 0;
}
