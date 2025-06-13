#include <iostream>

int main() {
    int   liczba_calkowita       = 21;
    float liczba_zmiennoprzecinkowa = 3.71f;
    char  znak                    = 'A';
    bool  wartosc_logiczna        = true;

    std::cout << "Zmienna ca³kowita: "            << liczba_calkowita       << std::endl;
    std::cout << "Zmienna zmiennoprzecinkowa: "    << liczba_zmiennoprzecinkowa << std::endl;
    std::cout << "Zmienna znakowa: "               << znak                    << std::endl;
    std::cout << "Zmienna logiczna: "             << (wartosc_logiczna ? "true" : "false") << std::endl;
    return 0;
}
