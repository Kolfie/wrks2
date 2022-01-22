// Wrks2.cpp

#include <iostream>
#include <cstring>

int main()
{
    const size_t n = 256;

    char a[n];
    if (!std::cin.getline(a, n)) return 1;

    char b[n];
    size_t len = std::strlen(a);
    b[len] = '\0';

    for (size_t i = 0, j = len; j > 0; ++i)
        b[i] = a[--j];

    std::cout << b << "\n";
}