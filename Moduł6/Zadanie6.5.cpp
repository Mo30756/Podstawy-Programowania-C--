#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void LosujTablice(int *arr, int size, int start, int end) {
    for(int i = 0; i < size; ++i)
        arr[i] = start + std::rand() % (end - start + 1);
}

bool SprawdzLiczbe(int guess, const int *arr, int size) {
    for(int i = 0; i < size; ++i)
        if (arr[i] == guess) return true;
    return false;
}

int main() {
    std::srand((unsigned)std::time(nullptr));
    int n, start, end;
    std::cout << "Ile liczb wylosowac? ";
    std::cin >> n;
    std::cout << "Przedzial poczatek: ";
    std::cin >> start;
    std::cout << "Przedzial koniec: ";
    std::cin >> end;

    std::vector<int> tab(n);
    LosujTablice(tab.data(), n, start, end);

    std::cout << "Tablica: ";
    for(int v : tab) std::cout << v << ", ";
    std::cout << "\n";

    int guess, prob = 0;
    do {
        std::cout << "Podaj liczbe: ";
        std::cin >> guess;
        ++prob;
        if (SprawdzLiczbe(guess, tab.data(), n)) {
            std::cout << "Zgadles!\n";
            break;
        } else {
            std::cout << "Nie zgadles\n";
        }
    } while(true);

    std::cout << "Zgadles za " << prob << " razem.\n";
    return 0;
}
