#include <iostream>
#include <iomanip>  
int main(){
    double masa, wzrost;
    std::cout << "Podaj wage (w kg): ";
    std::cin  >> masa;
    std::cout << "Podaj wzrost (w metrach): ";
    std::cin  >> wzrost;

    if(masa <= 0 || wzrost <= 0){
        std::cout << "Blad: masa i wzrost musza byc wieksze od 0!\n";
        return 1;
    }

    double bmi = masa / (wzrost * wzrost);
    std::cout << std::fixed << std::setprecision(4)
              << "\nTwoje BMI wynosi: " << bmi << "\n";

    std::cout << "Twoj stan wagowy: ";
    if(bmi < 18.5)
        std::cout << "Niedowaga\n";
    else if(bmi < 25.0)
        std::cout << "W normie\n";
    else if(bmi < 30.0)
        std::cout << "Nadwaga\n";
    else
        std::cout << "Otylosc\n";

    return 0;
}
