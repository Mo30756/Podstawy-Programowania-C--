#include <iostream>

void FindMinMax(const float *arr, int size, float *minVal, float *maxVal) {
    *minVal = *maxVal = arr[0];
    for(int i = 1; i < size; ++i) {
        if (arr[i] < *minVal) *minVal = arr[i];
        if (arr[i] > *maxVal) *maxVal = arr[i];
    }
}

int main() {
    const int N = 10;
    float tab[N] = {1.5f, -3.2f, 4.8f, 7.0f, -1.1f, 0.0f, 3.3f, -6.6f, 8.9f, 2.2f};
    float mn, mx;

    FindMinMax(tab, N, &mn, &mx);

    std::cout << "Tablica: ";
    for(float v : tab) std::cout << v << " ";
    std::cout << "\nNajmniejsza liczba: " << mn
              << "\nNajwieksza liczba: "   << mx << "\n";
    return 0;
}
