#include <iostream>

void operasi (int *a, int *b);

int main ()
{
    int a = 0, b = 0;
    std::cin >> a >> b;

    operasi (&a, &b);
    return 0;
}

void operasi (int *a, int *b)
{
    std::cout << *a + *b << "\n";
    std::cout << abs (*a - *b);
}