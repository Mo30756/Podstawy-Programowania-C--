#include <iostream>
int main() {
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    std::cout << "\nLiczby nieparzyste od 1 do " << N << ":\n";
    for(int i = 1; i <= N; ++i) {
        if(i % 2 != 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
