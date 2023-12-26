#include <iostream>
#include <iomanip>
int main ()
{
    int a = 0;
    long b = 0;
    char c = 0;
    float d = 0;
    double e = 0;

    std::cin >> a >> b >> c >> d >> e;
    std::cout << a << "\n" << b << "\n" << c << "\n";
    std::cout << std::fixed << std::setprecision (3) << d << "\n";
    std::cout << std::fixed << std::setprecision (9) << e;
    
    return 0;
}