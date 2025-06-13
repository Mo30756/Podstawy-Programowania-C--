#include <iostream>
int main(){
    const int ROZ = 5;
    int tab[ROZ];
    std::cout << "Podaj 5 liczb calkowitych:\n";
    for(int i = 0; i < ROZ; ++i){
        std::cout << "Podaj liczbe nr " << (i+1) << ": ";
        std::cin >> tab[i];
    }
    int suma = 0;
    for(int i = 0; i < ROZ; ++i){
        suma += tab[i];
    }
    double srednia = static_cast<double>(suma) / ROZ;
    std::cout << "\nSrednia liczb: " << srednia << std::endl;
    return 0;
}
