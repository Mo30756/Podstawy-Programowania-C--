#include <iostream>
int main(){
    const int ROZ = 5;
    int tab[ROZ];
    std::cout << "Podaj 5 liczb calkowitych:\n";
    for(int i = 0; i < ROZ; ++i){
        std::cout << "Podaj liczbe nr " << (i+1) << ": ";
        std::cin >> tab[i];
    }
    for(int i = 0; i < ROZ; ++i){
        if(tab[i] < 0) tab[i] = 0;
    }
    std::cout << "\nLiczby ujemne zamienione na 0: ";
    for(int i = 0; i < ROZ; ++i){
        std::cout << tab[i] << (i<ROZ-1 ? ", " : "");
    }
    std::cout << std::endl;
    return 0;
}
