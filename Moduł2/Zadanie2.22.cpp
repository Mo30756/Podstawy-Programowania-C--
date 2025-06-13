#include <iostream>
int main() {
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    std::cout << "\nKwadraty liczb od 1 do " << N << ":\n";
    for(int i = 1; i <= N; ++i) {
        std::cout << i << "^2 = " << (i * i) << std::endl;
    }
    return 0;
}
