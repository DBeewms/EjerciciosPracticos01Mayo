#include <iostream>

int main()
{
    int suma = 0;
    for (int i = 100; i <= 200; i += 2)
    {
        suma += i;
        std::cout << "Suma par: " << suma << std::endl;
    }
    return 0;
}