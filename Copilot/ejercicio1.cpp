#include <iostream>

int main()
{
    int num, suma = 0;
    std::cout << "Enter a number and I will calculate the sum of all numbers up to that number: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }

    std::cout << "The sum of numbers from 1 to " << num << " is: " << suma << std::endl;

    return 0;
}