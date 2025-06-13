#include <windows.h>
int main(){
  SetConsoleCP(CP_UTF8);
  SetConsoleOutputCP(CP_UTF8);

  std::string imie;
  int wiek;

  std::cout << u8"Podaj swoje imiê: ";
  std::getline(std::cin, imie);

  std::cout << u8"Podaj swój wiek: ";
  std::cin >> wiek;

  std::cout << u8"Witaj, " << imie << u8"! Masz " << wiek << u8" lat." << std::endl;
  return 0;
}

