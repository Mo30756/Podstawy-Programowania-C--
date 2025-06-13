#include <iostream>
int main(){
    const int ROZ = 10;
    int tab[ROZ];
    std::cout << "Podaj 10 liczb calkowitych:\n";
    for(int i = 0; i < ROZ; ++i){
        std::cout << "Podaj liczbe nr " << (i+1) << ": ";
        std::cin >> tab[i];
    }
    int suma = 0;
    std::cout << "\nLiczby parzyste: ";
    for(int i = 0; i < ROZ; ++i){
        if(tab[i] % 2 == 0){
            std::cout << tab[i] << (i<ROZ-1 ? ", " : "");
            suma += tab[i];
        }
    }
    std::cout << "\nSuma liczb parzystych: " << suma << std::endl;
    return 0;
}
