#include <iostream>

int main(){
    int N;
    std::cout << "Podaj liczbe calkowita dodatnia N: ";
    std::cin >> N;

    int count = 0;
    int i = 1;
    if(N >= 1){
        do {
            if(i % 2 == 0) 
                count++;
            i++;
        } while(i <= N);
    }

    std::cout << "Liczba liczb parzystych od 1 do " 
              << N << " wynosi: " << count << std::endl;
    return 0;
}
