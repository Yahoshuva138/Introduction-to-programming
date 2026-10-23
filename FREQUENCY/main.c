#include "frequency.c"

int main()
{
    int num;
    int digit;
    scanf("%d", &num);
    scanf("%d", &digit);
    printf("Frequency of %d in %d is: %d\n", digit, num, frequency(num, digit));

    return 0;
}