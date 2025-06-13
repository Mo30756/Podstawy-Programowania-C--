#include <iostream>
int main() {
    int szer, wys;
    std::cout << "Podaj szerokosc: ";
    std::cin >> szer;
    std::cout << "Podaj wysokosc: ";
    std::cin >> wys;

    for(int i = 0; i < wys; ++i) {
        for(int j = 0; j < szer; ++j) {
            if(i == 0 || i == wys-1 || j == 0 || j == szer-1)
                std::cout << '*';
            else
                std::cout << ' ';
        }
        std::cout << '\n';
    }
    return 0;
}
