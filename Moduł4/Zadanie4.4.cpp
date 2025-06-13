#include <iostream>
#include <cstring>

int main(){
    const int MAX = 100;
    char tekst[MAX], odwrocony[MAX];

    std::cout << "Podaj ciag znakow: ";
    std::cin.getline(tekst, MAX);

    size_t len = std::strlen(tekst);
    for(size_t i = 0; i < len; ++i){
        odwrocony[i] = tekst[len - 1 - i];
    }
    odwrocony[len] = '\0';


    std::cout << "Odwrocony ciag: " << odwrocony << "\n";
    return 0;
}
