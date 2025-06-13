#include <iostream>

int main(){
    int x;
    char odpowiedz;

    do {
        std::cout << "Podaj liczbe: ";
        std::cin  >> x;
        std::cout << "Wprowadziles liczbe: " << x << std::endl;

        std::cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        std::cin  >> odpowiedz;
    } while(odpowiedz == 't' || odpowiedz == 'T');

    std::cout << "Dziekuje za wprowadzenie liczb!" << std::endl;
    return 0;
}
