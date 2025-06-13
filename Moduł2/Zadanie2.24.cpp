#include <iostream>
#include <vector>
int main() {
    int wiersze, kolumny;
    std::cout << "Podaj liczbe wierszy: ";
    std::cin >> wiersze;
    std::cout << "Podaj liczbe kolumn: ";
    std::cin >> kolumny;

    std::vector<std::vector<int> > mat(wiersze, std::vector<int>(kolumny));
    int val = 1;
    for(int i = 0; i < wiersze; ++i) {
        for(int j = 0; j < kolumny; ++j) {
            mat[i][j] = val;
            val += 2;
        }
    }

    std::cout << std::endl;
    for(int i = 0; i < wiersze; ++i) {
        for(int j = 0; j < kolumny; ++j) {
            std::cout << mat[i][j] 
                      << (mat[i][j] < 10 ? "   " 
                          : mat[i][j] < 100 ? "  " : " ") ;
        }
        std::cout << "\n";
    }
    return 0;
}
