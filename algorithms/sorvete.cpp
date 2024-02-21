#include <iostream>
#include <cmath>

int main()
{
    int s0, v0, t;

    std::cout << "Insira a velocidade incial (v0): ";
    std::cin >> v0;

    std::cout << "Insira o tempo (t): ";
    std::cin >> t;

    // Aplicando a formula s0 = v0 * t^2/2
    s0 = v0 * pow(t, 2) / 2;

    // Exibir o resultado
    std::cout << "Distancia recorrida (s0): " << s0 << "m" << std::endl;

    return 0;
}