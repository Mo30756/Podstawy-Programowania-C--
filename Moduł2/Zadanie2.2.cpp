#include <iostream>

int main(){
    int N;
    std::cout << "Podaj liczbe N: ";
    std::cin >> N;

    int suma = 0;
    int i = 1;
    while(i <= N){
        suma += i;
        i++;
    }

    std::cout << "\nSuma liczb naturalnych do " << N << ": " 
              << suma << std::endl;
    return 0;
}
