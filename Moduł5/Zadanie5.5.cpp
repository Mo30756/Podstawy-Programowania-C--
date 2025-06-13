#include <iostream>
#include <cstdlib>
#include <ctime>

void DuzaMala(int guess, int target) {
    if (guess < target)      std::cout << "Za malo\n";
    else if (guess > target) std::cout << "Za duzo\n";
    else                     std::cout << "Gratulacje! Odgadles liczbe.\n";
}

bool CheckLiczba(int guess, int target) {
    return guess == target;
}

int main() {
    std::srand((unsigned)std::time(nullptr));
    int target = std::rand() % 100 + 1;
    int guess;

    do {
        std::cout << "Podaj liczbe: ";
        std::cin >> guess;
        DuzaMala(guess, target);
    } while (!CheckLiczba(guess, target));

    return 0;
}
