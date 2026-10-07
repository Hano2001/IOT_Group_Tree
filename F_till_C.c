#include <stdio.h>

double celsius_till_fahrenheit(double temperatur)
{
    return (temperatur * 9.0 / 5.0) + 32.0;
}

double fahrenheit_till_celsius(double temperatur)
{
    return (temperatur - 32.0) * 5.0 / 9.0;
}

int main()
{
    int val;
    double temperatur;
    double resultat;

    printf("Temperaturkonverterare\n\n");
    printf("1. Celsius till Fahrenheit\n");
    printf("2. Fahrenheit till Celsius\n");

    printf("Välj 1 eller 2: ");
    scanf("%d", &val);

    printf("Skriv temperaturen: ");
    scanf("%lf", &temperatur);

    if (val == 1)
    {
        resultat = celsius_till_fahrenheit(temperatur);
        printf("%.1f Celsius är %.1f Fahrenheit\n", temperatur, resultat);
    }
    else if (val == 2)
    {
        resultat = fahrenheit_till_celsius(temperatur);
        printf("%.1f Fahrenheit är %.1f Celsius\n", temperatur, resultat);
    }
    else
    {
        printf("Du måste välja 1 eller 2.\n");
    }

    return 0;
}