#include <iostream>

int main(){
    int godziny;
    char pojazd;
    int oplata = 0;

    std::cout << "Podaj liczbe godzin parkowania: ";
    std::cin  >> godziny;
    std::cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    std::cin  >> pojazd;

    switch(pojazd){
        case 'S':
        case 's':
            oplata = godziny * 5;
            break;
        case 'M':
        case 'm':
            oplata = godziny * 3;
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10;
            break;
        default:
            std::cout << "Blad: nieznany typ pojazdu!\n";
            return 1;
    }

    std::cout << "Oplata za parkowanie: " << oplata << " zl\n";
    return 0;
}
