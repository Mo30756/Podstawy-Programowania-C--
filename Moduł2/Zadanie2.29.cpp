#include <iostream>
int main() {
    int count = 0;
    for(int a = 1; a <= 9; ++a) {
        for(int b = 0; b <= 9; ++b) {
            for(int c = 0; c <= 9; ++c) {
                if(a != b && a != c && b != c) {
                    int num = a * 100 + b * 10 + c;
                    std::cout << num << std::endl;
                    ++count;
                }
            }
        }
    }
    std::cout << "Liczb bez powtarzajacych sie cyfr: " << count << std::endl;
    return 0;
}
