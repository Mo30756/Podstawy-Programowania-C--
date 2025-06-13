#include <iostream>

int main(){
    double c;
    char unit;

    std::cout << "Podaj temperature w stopniach Celsjusza: ";
    std::cin  >> c;
    std::cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    std::cin  >> unit;

    switch(unit){
        case 'K':
        case 'k':
            std::cout << "Temperatura w Kelwinach: " << (c + 273.15) << "\n";
            break;
        case 'F':
        case 'f':
            std::cout << "Temperatura w stopniach Fahrenheita: " 
                      << (c * 9.0/5.0 + 32.0) << "\n";
            break;
        default:
            std::cout << "Blad: nieznana jednostka! Uzyj K lub F.\n";
    }

    return 0;
}

