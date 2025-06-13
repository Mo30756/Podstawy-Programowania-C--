#include <iostream>
int main() {
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    int suma = 0;
    for(int i = 1; i <= N; ++i) {
        suma += i;
    }

    std::cout << "\nSuma liczb od 1 do " << N << " wynosi: " << suma << std::endl;
    return 0;
}
