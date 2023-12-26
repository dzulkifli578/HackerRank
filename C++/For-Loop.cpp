#include <iostream>

int main ()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    
    for (int i = a; a <= b; a++)
    {
        if (a <= 9)
        {
            switch (a)
            {
                case 1: std::cout << "one" << "\n";
                        break;
                case 2: std::cout << "two" << "\n";
                        break;
                case 3: std::cout << "three" << "\n";
                        break;
                case 4: std::cout << "four" << "\n";
                        break;
                case 5: std::cout << "five" << "\n";
                        break;
                case 6: std::cout << "six" << "\n";
                        break;
                case 7: std::cout << "seven" << "\n";
                        break;
                case 8: std::cout << "eight" << "\n";
                        break;
                case 9: std::cout << "nine" << "\n";
                        break;
            }
        }
        else
        {
            if (a % 2 == 0) std::cout << "even" << "\n";
            if (a % 2 == 1) std::cout << "odd" << "\n";
        }
    }

    return 0;
}