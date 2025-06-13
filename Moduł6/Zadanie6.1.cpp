#include <iostream>

int main() {
    int a = 5, b = 10;

    int *wskA = &a;
    int *wskB = &b;

    std::cout << "Przed modyfikacja:\n";
    std::cout << "a = " << a << "\nb = " << b << "\n\n";

   
    *wskA = 15;
    *wskB = 20;

    std::cout << "Po modyfikacji:\n";
    std::cout << "a = " << a << "\nb = " << b << "\n";
    return 0;
}
