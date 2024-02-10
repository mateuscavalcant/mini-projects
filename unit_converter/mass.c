// MASS CONVERTER
#include <stdio.h>
#include <string.h>

struct Mass
{
    double kg;
    double hg;
    double dag;
    double g;
    double dg;
    double cg;
    double mg;
} Value;

// Function to convert kilograms to hectograms
double KgToHg()
{
    Value.hg = Value.kg * 10;
    return Value.hg;
}

// Function to convert hectograms to kilograms
double HgToKg()
{
    Value.kg = Value.hg / 10;
    return Value.kg;
}

// Function to convert kilograms to decagrams
double KgToDag()
{
    Value.dag = Value.kg * 100;
    return Value.dag;
}

// Function to convert decagrams to kilograms
double DagToKg()
{
    Value.kg = Value.dag / 100;
    return Value.kg;
}

// Function to convert kilograms to grams
double KgToG()
{
    Value.g = Value.kg * 1000;
    return Value.g;
}

// Function to convert grams to kilograms
double GToKg()
{
    Value.kg = Value.g / 1000;
    return Value.kg;
}

// Function to convert kilograms to decigrams
double KgToDg()
{
    Value.dg = Value.kg * 10000;
    return Value.dg;
}

// Function to convert decigrams to kilograms
double DgToKg()
{
    Value.kg = Value.dg / 10000;
    return Value.kg;
}

// Function to convert kilograms to centigrams
double KgToCg()
{
    Value.cg = Value.kg * 100000;
    return Value.cg;
}

// Function to convert centigrams to kilograms
double CgToKg()
{
    Value.kg = Value.cg / 100000;
    return Value.kg;
}

// Function to convert kilograms to milligrams
double KgToMg()
{
    Value.mg = Value.kg * 1000000;
    return Value.mg;
}

// Function to convert milligrams to kilograms
double MgToKg()
{
    Value.kg = Value.mg / 1000000;
    return Value.kg;
}

// Function to run the mass converter
double runMassConverter()
{
    char unit1[10], unit2[10];

    printf("Choose the source unit (kilograms [kg], hectograms [hg], decagrams [dag], grams [g], decigrams [dg], centigrams [cg], or milligrams [mg]): ");
    scanf("%s", unit1);

    printf("Convert %s", unit1);
    printf(" to which unit? (kilograms [kg], hectograms [hg], decagrams [dag], grams [g], decigrams [dg], centigrams [cg], or milligrams [mg]): ");
    scanf("%s", unit2);

    printf("Enter the value in %s: ", unit1);
    if (strcmp(unit1, "kg") == 0)
        scanf("%lf", &Value.kg);
    else if (strcmp(unit1, "hg") == 0)
        scanf("%lf", &Value.hg);
    else if (strcmp(unit1, "dag") == 0)
        scanf("%lf", &Value.dag);
    else if (strcmp(unit1, "g") == 0)
        scanf("%lf", &Value.g);
    else if (strcmp(unit1, "dg") == 0)
        scanf("%lf", &Value.dg);
    else if (strcmp(unit1, "cg") == 0)
        scanf("%lf", &Value.cg);
    else if (strcmp(unit1, "mg") == 0)
        scanf("%lf", &Value.mg);
    else
    {
        printf("Invalid source unit.\n");
        return -1;
    }

    double result = 0.0;

    switch (unit1[0])
    {
    case 'k':
        switch (unit2[0])
        {
        case 'g':
            result = KgToG();
            printf("%.2f kilograms is %.2f grams\n", Value.kg, result);
            break;
        case 'h':
            result = KgToHg();
            printf("%.2f kilograms is %.2f hectograms\n", Value.kg, result);
            break;
        case 'd':
            result = KgToDag();
            printf("%.2f kilograms is %.2f decagrams\n", Value.kg, result);
            break;
        case 'm':
            result = KgToMg();
            printf("%.2f kilograms is %.2f milligrams\n", Value.kg, result);
            break;
        case 'c':
            result = KgToCg();
            printf("%.2f kilograms is %.2f centigrams\n", Value.kg, result);
            break;
        case 'i':
            result = KgToDg();
            printf("%.2f kilograms is %.2f decigrams\n", Value.kg, result);
            break;
        case 'k':
            printf("The same unit, no conversion needed.\n");
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;
    case 'h':
        switch (unit2[0])
        {
        case 'k':
            result = HgToKg();
            printf("%.2f hectograms is %.2f kilograms\n", Value.hg, result);
            break;
        case 'd':
            result = HgToKg() * 100;
            printf("%.2f hectograms is %.2f decagrams\n", Value.hg, result);
            break;
        case 'g':
            result = HgToKg() * 1000;
            printf("%.2f hectograms is %.2f grams\n", Value.hg, result);
            break;
        case 'i':
            result = HgToKg() * 10000;
            printf("%.2f hectograms is %.2f decigrams\n", Value.hg, result);
            break;
        case 'c':
            result = HgToKg() * 100000;
            printf("%.2f hectograms is %.2f centigrams\n", Value.hg, result);
            break;
        case 'm':
            result = HgToKg() * 1000000;
            printf("%.2f hectograms is %.2f milligrams\n", Value.hg, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;
    case 'd':
        switch (unit2[0])
        {
        case 'k':
            result = DagToKg();
            printf("%.2f decagrams is %.2f kilograms\n", Value.dag, result);
            break;
        case 'h':
            result = DagToKg() * 10;
            printf("%.2f decagrams is %.2f hectograms\n", Value.dag, result);
            break;
        case 'g':
            result = DagToKg() * 100;
            printf("%.2f decagrams is %.2f grams\n", Value.dag, result);
            break;
        case 'd':
            result = DagToKg() * 1000;
            printf("%.2f decagrams is %.2f decigrams\n", Value.dag, result);
            break;
        case 'c':
            result = DagToKg() * 10000;
            printf("%.2f decagrams is %.2f centigrams\n", Value.dag, result);
            break;
        case 'm':
            result = DagToKg() * 100000;
            printf("%.2f decagrams is %.2f milligrams\n", Value.dag, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;

    case 'g':
        switch (unit2[0])
        {
        case 'k':
            result = GToKg();
            printf("%.2f grams is %.2f kilograms\n", Value.g, result);
            break;
        case 'h':
            result = GToKg() / 10;
            printf("%.2f grams is %.2f hectograms\n", Value.g, result);
            break;
        case 'd':
            result = GToKg() / 100;
            printf("%.2f grams is %.2f decagrams\n", Value.g, result);
            break;
        case 'i':
            result = GToKg() * 10;
            printf("%.2f grams is %.2f decigrams\n", Value.g, result);
            break;
        case 'c':
            result = GToKg() * 100;
            printf("%.2f grams is %.2f centigrams\n", Value.g, result);
            break;
        case 'm':
            result = GToKg() * 1000;
            printf("%.2f grams is %.2f milligrams\n", Value.g, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;

    case 'i':
        switch (unit2[0])
        {
        case 'k':
            result = DgToKg();
            printf("%.2f decigrams is %.2f kilograms\n", Value.dg, result);
            break;
        case 'h':
            result = DgToKg() / 10;
            printf("%.2f decigrams is %.2f hectograms\n", Value.dg, result);
            break;
        case 'd':
            result = DgToKg() / 100;
            printf("%.2f decigrams is %.2f decagrams\n", Value.dg, result);
            break;
        case 'g':
            result = DgToKg() / 10;
            printf("%.2f decigrams is %.2f grams\n", Value.dg, result);
            break;
        case 'c':
            result = DgToKg() * 10;
            printf("%.2f decigrams is %.2f centigrams\n", Value.dg, result);
            break;
        case 'm':
            result = DgToKg() * 100;
            printf("%.2f decigrams is %.2f milligrams\n", Value.dg, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;

    case 'c':
        switch (unit2[0])
        {
        case 'k':
            result = CgToKg();
            printf("%.2f centigrams is %.2f kilograms\n", Value.cg, result);
            break;
        case 'h':
            result = CgToKg() / 10;
            printf("%.2f centigrams is %.2f hectograms\n", Value.cg, result);
            break;
        case 'd':
            result = CgToKg() / 100;
            printf("%.2f centigrams is %.2f decagrams\n", Value.cg, result);
            break;
        case 'g':
            result = CgToKg() / 100;
            printf("%.2f centigrams is %.2f grams\n", Value.cg, result);
            break;
        case 'i':
            result = CgToKg() / 10;
            printf("%.2f centigrams is %.2f decigrams\n", Value.cg, result);
            break;
        case 'm':
            result = CgToKg() * 10;
            printf("%.2f centigrams is %.2f milligrams\n", Value.cg, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;

    case 'm':
        switch (unit2[0])
        {
        case 'k':
            result = MgToKg();
            printf("%.2f milligrams is %.2f kilograms\n", Value.mg, result);
            break;
        case 'h':
            result = MgToKg() / 10;
            printf("%.2f milligrams is %.2f hectograms\n", Value.mg, result);
            break;
        case 'd':
            result = MgToKg() / 100;
            printf("%.2f milligrams is %.2f decagrams\n", Value.mg, result);
            break;
        case 'g':
            result = MgToKg() / 1000;
            printf("%.2f milligrams is %.2f grams\n", Value.mg, result);
            break;
        case 'i':
            result = MgToKg() / 10000;
            printf("%.2f milligrams is %.2f decigrams\n", Value.mg, result);
            break;
        case 'c':
            result = MgToKg() / 100000;
            printf("%.2f milligrams is %.2f centigrams\n", Value.mg, result);
            break;
        default:
            printf("Invalid destination unit.\n");
            break;
        }
        break;

    default:
        printf("Invalid source unit.\n");
        break;
    }

    return 0;
}

int main()
{
    char choice;

    do
    {
        runMassConverter();
        printf("\nDo you want to convert another mass? (s/n): ");
        scanf(" %c", &choice);
    } while (choice == 's' || choice == 'S');

    return 0;
}
