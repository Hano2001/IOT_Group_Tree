#include <stdio.h>

int skriv_fizzbuzz(int fran, int till)
{
    for (int i = fran; i <= till; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }

        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

void fizzbuzz_sammanfattning(int fran, int till, char *sammanfattning)
{

    int fizz_buzz = 0;
    int fizz = 0;
    int buzz = 0;

    for (int i = fran; i <= till; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            fizz_buzz++;
        }
        else if (i % 3 == 0)
        {
            fizz++;
        }
        else if (i % 5 == 0)
        {
            buzz++;
        }
    }
}
