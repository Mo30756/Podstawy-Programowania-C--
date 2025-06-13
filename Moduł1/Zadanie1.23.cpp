#include <iostream>

int main(){
    int x;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin  >> x;

    // parzystosc
    if(x % 2 == 0)
        std::cout << "\nLiczba " << x << " jest parzysta.\n";
    else
        std::cout << "\nLiczba " << x << " jest nieparzysta.\n";

    // podzielnosc przez 3
    if(x % 3 == 0)
        std::cout << "Liczba " << x << " jest podzielna przez 3.\n";
    else
        std::cout << "Liczba " << x << " nie jest podzielna przez 3.\n";

    return 0;
}
