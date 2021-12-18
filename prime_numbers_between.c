// Third Question
#include <stdio.h>

int checkPrimeNumber(int number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Check is a Number is a prime number or not \n");
    int number_s, number_f, pn_result;
    printf("Prime Number Start : ");
    scanf("%d", &number_s);
    printf("Prime Number End : ");
    scanf("%d", &number_f);
    if (number_s <= 0 || number_f <= 0)
    {
        main();
    }
    printf("Prime Number between %d and %d are : ", number_s, number_f);
    for (int i = number_s; i <= number_f; i++)
    {
        pn_result = checkPrimeNumber(i);
        if (pn_result == 1)
        {
            printf("%d ", i);
        }
    }
}
