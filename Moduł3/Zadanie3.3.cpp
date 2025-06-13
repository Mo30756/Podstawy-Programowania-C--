#include <iostream>
#include <limits>
int main(){
    const int ROZ = 10;
    int tab[ROZ];
    std::cout << "Podaj 10 liczb calkowitych:\n";
    for(int i = 0; i < ROZ; ++i){
        std::cout << "Podaj liczbe nr " << (i+1) << ": ";
        std::cin >> tab[i];
    }
    int najm = tab[0];
    for(int i = 1; i < ROZ; ++i){
        if(tab[i] < najm) najm = tab[i];
    }
    std::cout << "\nNajmniejsza liczba to: " << najm << std::endl;
    return 0;
}
