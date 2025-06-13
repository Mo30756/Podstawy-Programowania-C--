#include <iostream>


int ObliczSume(const int *arr, int size) {
    int suma = 0;
    for(int i = 0; i < size; ++i)
        suma += arr[i];
    return suma;
}

int main() {
    const int N = 4;
    int tab[N] = {5, 10, 15, 20};

    int suma = ObliczSume(tab, N);
    std::cout << "Suma elementow tablicy: " << suma << "\n";

    
    for(int i = 0; i < N; ++i) {
        std::cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        std::cin >> tab[i];
    }

    std::cout << "Nowa tablica:\n";
    for(int i = 0; i < N; ++i)
        std::cout << tab[i] << " ";
    std::cout << "\n";

    int nowaSuma = ObliczSume(tab, N);
    std::cout << "Nowa suma elementow tablicy: " << nowaSuma << "\n";
    return 0;
}
