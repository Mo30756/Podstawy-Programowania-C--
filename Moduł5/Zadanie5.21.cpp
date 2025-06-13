#include <iostream>

int main() {
    const int MAX = 21;       
    char tekst[MAX];

    std::cout << "Podaj ciag znakow (max 20 znakow): ";
    std::cin.getline(tekst, MAX);

    std::cout << "Wprowadzony ciag znakow: " << tekst << "\n";
    return 0;
}
