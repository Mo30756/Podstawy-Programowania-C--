#include <iostream>

int main(){
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    std::cout << "\nLiczby parzyste od 2 do " << N << ":\n";
    int i = 2;
    while(i <= N){
        std::cout << i << std::endl;
        i += 2;
    }
    return 0;
}
