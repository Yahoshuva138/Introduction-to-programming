#include <stdio.h>

char grades(int marks)
{
    char grade;
    //Write your code here

    /* Step 1: handle invalid input first.
       Marks must be between 0 and 100 (both included). */
    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
        return 'X';   /* 'X' signals "invalid" to main() */
    }

    /* Step 2: use switch case as hinted.
       Trick: marks / 10 puts every mark into its "bucket":
         100 -> 10 | 90..99 -> 9 | 80..89 -> 8 | 70..79 -> 7
         60..69 -> 6 | 50..59 -> 5 | 0..49  -> 0..4  */
    switch (marks / 10)
    {
        case 10:  /* exactly 100 */
        case 9:   /* 90 - 99 */
            grade = 'A';
            break;
        case 8:   /* 80 - 89 */
            grade = 'B';
            break;
        case 7:   /* 70 - 79 */
            grade = 'C';
            break;
        case 6:   /* 60 - 69 */
            grade = 'D';
            break;
        case 5:   /* 50 - 59 */
            grade = 'E';
            break;
        default:  /* 0 - 49 */
            grade = 'F';
            break;
    }

    //
    return grade;
}
