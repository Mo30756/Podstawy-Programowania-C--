#include <iostream>
#include <array>


std::array<int,5> GetArrayFromUser() {
    std::array<int,5> arr;
    for(int i = 0; i < 5; ++i) {
        std::cout << "Podaj liczbe nr " << (i+1) << ": ";
        std::cin >> arr[i];
    }
    return arr;
}


int FindMaxValue(const std::array<int,5> &arr) {
    int m = arr[0];
    for(int x : arr)
        if (x > m) m = x;
    return m;
}


void DisplayResult(int maxVal) {
    std::cout << "Najwieksza liczba: " << maxVal << "\n";
}
int main() {
    auto tab = GetArrayFromUser();
    int mx = FindMaxValue(tab);
    DisplayResult(mx);
    return 0;
}
