#include <iostream>

int main()
{
    int n, f = 1;

    std::cout << "Enter a number to be factorialized: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        /* factoring the received number */

        f = f * i;
    }

    std::cout << "Factorial of " << n << " is: " << f << ".";

    return 0;
}
