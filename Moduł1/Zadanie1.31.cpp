#include <iostream>

int main(){
    int a, b;
    char op;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin  >> a;
    std::cout << "Podaj druga liczbe: ";
    std::cin  >> b;
    std::cout << "Podaj znak dzialania (+, -, *, /): ";
    std::cin  >> op;

    switch(op){
        case '+':
            std::cout << "Wynik: " << (a + b) << "\n";
            break;
        case '-':
            std::cout << "Wynik: " << (a - b) << "\n";
            break;
        case '*':
            std::cout << "Wynik: " << (a * b) << "\n";
            break;
        case '/':
            if(b == 0)
                std::cout << "Blad: dzielenie przez zero!\n";
            else
                std::cout << "Wynik: " << (a / b) << "\n";
            break;
        default:
            std::cout << "Blad: nieznany znak dzialania!\n";
    }

    return 0;
}
