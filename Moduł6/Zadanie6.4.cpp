#include <iostream>
#include <cstdlib>
#include <ctime>

void LosujTablice(int *arr, int size) {
    for(int i = 0; i < size; ++i)
        arr[i] = std::rand() % 51;  
}

bool SprawdzLiczbe(int guess, const int *arr, int size) {
    for(int i = 0; i < size; ++i)
        if (arr[i] == guess) return true;
    return false;
}

int main() {
    std::srand((unsigned)std::time(nullptr));
    const int N = 10;
    int tab[N];
    LosujTablice(tab, N);

    std::cout << "Tablica: ";
    for(int v : tab) std::cout << v << ", ";
    std::cout << "\n";

    int guess, prob = 0;
    do {
        std::cout << "Podaj liczbe: ";
        std::cin >> guess;
        ++prob;
        if (SprawdzLiczbe(guess, tab, N)) {
            std::cout << "Zgadles!\n";
            break;
        } else {
            std::cout << "Nie zgadles\n";
        }
    } while(true);

    std::cout << "Zgadles za " << prob << " razem.\n";
    return 0;
}
