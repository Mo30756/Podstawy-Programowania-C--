#include <iostream>


int GetNumberFromUser() {
    int n;
    std::cout << "Podaj liczbe: ";
    std::cin >> n;
    return n;
}


unsigned long long CalculateFactorial(int n) {
    unsigned long long result = 1;
    for(int i = 2; i <= n; ++i)
        result *= i;
    return result;
}


void DisplayResult(int n, unsigned long long fact) {
    std::cout << "Silnia liczby " << n << " wynosi: " << fact << "\n";
}

int main() {
    int n = GetNumberFromUser();
    unsigned long long f = CalculateFactorial(n);
    DisplayResult(n, f);
    return 0;
}
