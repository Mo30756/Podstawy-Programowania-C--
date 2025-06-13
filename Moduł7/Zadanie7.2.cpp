#include <iostream>
#include <string>

struct Osoba {
    std::string imie;
    std::string nazwisko;
    int wiek;
};

int main() {
    Osoba tab[3] = {
        {"Jan",  "Kowalski",    37},
        {"Anna", "Nowak",       50},
        {"Piotr","Wisniewski",  61}
    };

    std::cout << "Dane zapisane w tablicy struktur:\n";
    for(int i = 0; i < 3; ++i) {
        std::cout << (i+1) << ". Imie: " << tab[i].imie
                  << ", Nazwisko: " << tab[i].nazwisko
                  << ", Wiek: " << tab[i].wiek << "\n";
    }
    return 0;
}
