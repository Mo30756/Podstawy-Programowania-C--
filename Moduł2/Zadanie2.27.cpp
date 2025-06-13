#include <iostream>
int main() {
    int szer, wys;
    std::cout << "Podaj szerokosc: ";
    std::cin >> szer;
    std::cout << "Podaj wysokosc: ";
    std::cin >> wys;

    // g�rna kraw�d�
    for(int j = 0; j < szer; ++j) std::cout << '-';
    std::cout << '\n';

    for(int i = 1; i < wys-1; ++i) {
        std::cout << '|';
        for(int j = 1; j < szer-1; ++j) {
            // na przemian # i * wg sumy indeks�w
            if((i + j) % 2 == 0) std::cout << '#';
            else               std::cout << '*';
        }
        std::cout << '|' << '\n';
    }

    // dolna kraw�d�
    for(int j = 0; j < szer; ++j) std::cout << '-';
    std::cout << '\n';
    return 0;
}
