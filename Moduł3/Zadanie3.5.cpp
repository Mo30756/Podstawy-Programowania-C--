#include <iostream>
int main(){
    const int WIERSZE = 3, KOL = 3;
    int mac[WIERSZE][KOL];
    std::cout << "Podaj 9 liczb calkowitych do macierzy 3x3:\n";
    for(int i = 0; i < WIERSZE; ++i){
        for(int j = 0; j < KOL; ++j){
            std::cout << "Podaj liczbe dla wiersza " << (i+1)
                      << ", kolumny " << (j+1) << ": ";
            std::cin >> mac[i][j];
        }
    }
    int suma = 0;
    for(int i = 0; i < WIERSZE; ++i)
        for(int j = 0; j < KOL; ++j)
            suma += mac[i][j];
    double srednia = static_cast<double>(suma) / (WIERSZE * KOL);
    std::cout << "\nSrednia liczb: " << srednia << std::endl;
    return 0;
}
