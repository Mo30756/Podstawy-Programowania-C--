#include <iostream>

double Add(double a, double b)       { return a + b; }
double Subtract(double a, double b)  { return a - b; }
double Multiply(double a, double b)  { return a * b; }
double Divide(double a, double b)    { return a / b; }

int main() {
    int choice;
    double a, b;

    do {
        std::cout << "\nWybierz funkcje:\n"
                     "1. Suma\n"
                     "2. Roznica\n"
                     "3. Iloczyn\n"
                     "4. Iloraz\n"
                     "0. Wyjscie\n"
                     "Wybrana funkcja: ";
        std::cin >> choice;
        if (choice == 0) break;

        std::cout << "Podaj pierwsza liczbe: ";
        std::cin >> a;
        std::cout << "Podaj druga liczbe: ";
        std::cin >> b;

        double wynik = 0;
        switch(choice) {
            case 1: wynik = Add(a,b); break;
            case 2: wynik = Subtract(a,b); break;
            case 3: wynik = Multiply(a,b); break;
            case 4:
                if (b == 0) {
                    std::cout << "Blad: dzielenie przez zero!\n";
                    continue;
                }
                wynik = Divide(a,b);
                break;
            default:
                std::cout << "Blad: nieznana opcja!\n";
                continue;
        }
        std::cout << "Wynik: " << wynik << "\n";
    } while(true);

    std::cout << "Koniec programu.\n";
    return 0;
}
