#include <stdio.h>
#include <stdbool.h>

bool is_rotationally_same(int num)
{
    bool ans;
    //Write your code here

    /* Which digit looks like which when the paper is
       rotated 180 degrees (upside down)?
         0 -> 0,  1 -> 1,  8 -> 8,  6 -> 9,  9 -> 6
       2, 3, 4, 5, 7 turn into garbage -> they are NOT allowed.

       Key insight: when you rotate the whole number, the digit
       order ALSO reverses (the last digit comes first), and
       every digit becomes its upside-down twin.
       Example: 96 -> rotate -> "69" reversed -> 96. Same!

       So: build the "rotated" number by reading the digits
       from RIGHT to LEFT, converting each one to its twin. */
    int rotated = 0;
    int temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;   /* take the last digit */

        switch (digit)
        {
            case 0: rotated = rotated * 10 + 0; break;
            case 1: rotated = rotated * 10 + 1; break;
            case 8: rotated = rotated * 10 + 8; break;
            case 6: rotated = rotated * 10 + 9; break;  /* 6 becomes 9 */
            case 9: rotated = rotated * 10 + 6; break;  /* 9 becomes 6 */
            default: return false;  /* 2,3,4,5,7 -> impossible */
        }

        temp = temp / 10;        /* drop the last digit */
    }

    /* If the upside-down reading equals the original number,
       the number is rotationally same. */
    ans = (rotated == num);

    //
    return ans;
}