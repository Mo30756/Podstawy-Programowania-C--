#include <iostream>
#include <string>


std::string GetTextFromUser() {
    std::string s;
    std::getline(std::cin, s);
    return s;
}


std::string ReverseString(const std::string &s) {
    return std::string(s.rbegin(), s.rend());
}


void DisplayResult(const std::string &s) {
    std::cout << "Odwrocony ciag: " << s << "\n";
}

int main() {
    std::cout << "Podaj ciag znakow: ";
    std::string input = GetTextFromUser();

    std::string rev = ReverseString(input);
    DisplayResult(rev);
    return 0;
}
