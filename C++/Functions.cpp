#include <iostream>

int max_of_four (int a, int b, int c, int d);

int main ()
{
    int a = 0, b = 0, c = 0, d = 0;
    std::cin >> a >> b >> c >> d;

    int max = max_of_four (a, b, c, d);
    std::cout << max;
    return 0;
}

int max_of_four (int a, int b, int c, int d)
{
    int sementara = a;

    if (b > sementara)
    {
        sementara = b;
    }
    if (c > sementara)
    {
        sementara = c;
    }
    if (d > sementara)
    {
        sementara = d;
    }

    return sementara;
}