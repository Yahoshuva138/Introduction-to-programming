#include <stdio.h>

int frequency(int num, int digit)
{
    int freq = 0;
    //Write your code here

    /* Work with the absolute value so that negative
       inputs (e.g. -122353) are also handled correctly. */
    if (num < 0)
    {
        num = -num;
    }

    /* Idea: peel off ONE digit at a time from the right.
         num % 10  -> gives the last digit
         num / 10  -> removes the last digit
       Keep doing this until the number becomes 0.
       Every time the peeled digit equals 'digit', count it. */
    while (num > 0)
    {
        if (num % 10 == digit)   /* last digit matches? */
        {
            freq = freq + 1;     /* yes -> count it */
        }
        num = num / 10;          /* drop the last digit */
    }

    //
    return freq;
}
