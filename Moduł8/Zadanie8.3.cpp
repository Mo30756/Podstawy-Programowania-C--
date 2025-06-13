#include <iostream>
#include <fstream>
#include <string>
#include <limits>

struct Osoba {
    std::string imie;
    std::string nazwisko;
    int wiek;
};

int main() {
    const char* fname = "dane.txt";
    std::ifstream fin(fname);

    if (!fin) {
       
        std::cout << "Plik " << fname << " nie istnieje. Tworzenie pliku...\n";
        std::ofstream fout(fname);
        fout << "Jan Kowalski 25\n";
        fout << "Anna Nowak 30\n";
        fout.close();
    } else {
        fin.close();
    }

    
    char odp;
    std::cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    std::cin >> odp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (odp == 't' || odp == 'T') {
        Osoba o;
        std::cout << "Podaj imie: ";
        std::getline(std::cin, o.imie);
        std::cout << "Podaj nazwisko: ";
        std::getline(std::cin, o.nazwisko);
        std::cout << "Podaj wiek: ";
        std::cin >> o.wiek;

        std::ofstream fout(fname, std::ios::app);
        fout << o.imie << " " << o.nazwisko << " " << o.wiek << "\n";
        fout.close();
    }

    
    std::ifstream fin2(fname);
    std::string im, naz;
    int wk;
    std::cout << "\nDane w pliku po dopisaniu:\n";
    while (fin2 >> im >> naz >> wk) {
        std::cout << "Imie: " << im
                  << ", Nazwisko: " << naz
                  << ", Wiek: " << wk << "\n";
    }
    fin2.close();

    return 0;
}
