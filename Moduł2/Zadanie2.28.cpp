#include <iostream>
int main() {
    int szer, wys;
    std::cout << "Podaj szerokosc: ";
    std::cin >> szer;
    std::cout << "Podaj wysokosc: ";
    std::cin >> wys;

    int margin = 0;
    for(int row = 0; row < wys; ++row) {
        
        for(int s = 0; s < margin; ++s) std::cout << ' ';
    
        for(int c = margin; c < szer - margin; ++c) std::cout << '*';
        std::cout << '\n';
        ++margin;
    }
    return 0;
}
