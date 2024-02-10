// TEMPERATURE CONVERTER
#include <iostream>
#include <string>

// Structure to hold temperature values
struct Temperature
{
    double celsius;
    double kelvin;
    double fahrenheit;
} Num;

// Functions to convert temperatures
double KelvinToCelsius()
{
    return Num.celsius = Num.kelvin - 273.15;
}

double kelvinToFahrenheit()
{
    return Num.kelvin * 9.0 / 5.0 - 459.67;
}

double CelsiusToKelvin()
{
    return Num.kelvin = 273.15 + Num.celsius;
}

double celsiusToFahrenheit()
{
    return Num.celsius * 9.0 / 5.0 + 32;
}

double fahrenheitToKelvin()
{
    return (Num.fahrenheit + 459.67) * 5.0 / 9.0;
}

double fahrenheitToCelsius()
{
    return (Num.fahrenheit - 32) * 5.0 / 9.0;
}

// Function to run the temperature converter
double runTemperatureConverter()
{
    std::string unit1;
    std::string unit2;

    std::cout << "Choose the source unit (kelvin [k], celsius [c] or fahrenheit [f]): ";
    std::cin >> unit1;

    if (unit1 == "kelvin" || unit1 == "k" || unit1 == "celsius" || unit1 == "c" || unit1 == "fahrenheit" || unit1 == "f")
    {
        std::cout << "Convert " << unit1;
        if (unit1 == "k")
            std::cout << " (Kelvin)";
        else if (unit1 == "c")
            std::cout << " (Celsius)";
        else if (unit1 == "f")
            std::cout << " (Fahrenheit)";
        std::cout << " to which unit? (kelvin [k], celsius [c] or fahrenheit [f]): ";
        std::cin >> unit2;

        switch (unit1[0])
        {
        case 'k':
            std::cout << "Enter the value in Kelvin: ";
            std::cin >> Num.kelvin;

            switch (unit2[0])
            {
            case 'c':
                std::cout << Num.kelvin << " kelvin is " << KelvinToCelsius() << " celsius" << std::endl;
                break;
            case 'f':
                std::cout << Num.kelvin << " kelvin is " << kelvinToFahrenheit() << " fahrenheit" << std::endl;
                break;
            default:
                std::cout << "Invalid destination unit";
                break;
            }
            break;
        case 'c':
            std::cout << "Enter the value in Celsius: ";
            std::cin >> Num.celsius;

            switch (unit2[0])
            {
            case 'k':
                std::cout << Num.celsius << " celsius is " << CelsiusToKelvin() << " kelvin" << std::endl;
                break;
            case 'f':
                std::cout << Num.celsius << " celsius is " << celsiusToFahrenheit() << " fahrenheit" << std::endl;
                break;
            default:
                std::cout << "Invalid destination unit";
                break;
            }
            break;
        case 'f':
            std::cout << "Enter the value in Fahrenheit: ";
            std::cin >> Num.fahrenheit;

            switch (unit2[0])
            {
            case 'k':
                std::cout << Num.fahrenheit << " fahrenheit is " << fahrenheitToKelvin() << " kelvin" << std::endl;
                break;
            case 'c':
                std::cout << Num.fahrenheit << " fahrenheit is " << fahrenheitToCelsius() << " celsius" << std::endl;
                break;
            default:
                std::cout << "Invalid destination unit";
                break;
            }
            break;
        default:
            std::cout << "Invalid source unit";
            break;
        }
    }
    else
    {
        std::cout << "Invalid source unit";
    }

    return 0;
}

int main()
{
    char choice;

    do
    {
        runTemperatureConverter();
        std::cout << "\nDo you want to convert another temperature? (s/n): ";
        std::cin >> choice;
    } while (choice == 's' || choice == 'S');

    return 0;
}
