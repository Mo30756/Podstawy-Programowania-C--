#include <iostream>
int main(){
    const int R = 2, C = 3;
    int mac[R][C], trans[C][R];
    std::cout << "Podaj 6 liczb calkowitych do macierzy 2x3:\n";
    for(int i = 0; i < R; ++i){
        for(int j = 0; j < C; ++j){
            std::cout << "Podaj liczbe dla wiersza " << (i+1)
                      << ", kolumny " << (j+1) << ": ";
            std::cin >> mac[i][j];
        }
    }
    // transpozycja
    for(int i = 0; i < R; ++i)
        for(int j = 0; j < C; ++j)
            trans[j][i] = mac[i][j];

    std::cout << "\nTransponowana macierz:\n";
    for(int i = 0; i < C; ++i){
        for(int j = 0; j < R; ++j){
            std::cout << trans[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
