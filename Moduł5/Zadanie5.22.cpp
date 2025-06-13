#include <iostream>

int main() {
    const int MAX = 21;
    char tekst[MAX];

    std::cout << "Podaj ciag znakow (max 20 znakow): ";
    std::cin.getline(tekst, MAX);

    for(int i = 0; tekst[i] != '\0'; ++i) {
        if(tekst[i] == 'a') tekst[i] = 'o';
    }

    std::cout << "Zmodyfikowany ciag znakow: " << tekst << "\n";
    return 0;
}
