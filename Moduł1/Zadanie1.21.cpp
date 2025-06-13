#include <iostream>

int main(){
    int punkty;
    std::cout << "Podaj wynik egzaminu (liczba punktow): ";
    std::cin >> punkty;

    if(punkty < 0 || punkty > 100){
        std::cout << "Blad: punktow musi byc w zakresie od 0 do 100!\n";
        return 1;
    }

    std::cout << "Ocena: ";
    if(punkty <= 49)
        std::cout << "Niedostateczna\n";
    else if(punkty <= 69)
        std::cout << "Dostateczna\n";
    else if(punkty <= 84)
        std::cout << "Dobra\n";
    else if(punkty <= 99)
        std::cout << "Bardzo dobra\n";
    else // punkty == 100
        std::cout << "Celujaca\n";

    return 0;
}

