#include "grades.c"

int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);

    /* Call grades() ONCE and store the result, so the error
       message (printed inside grades()) is never shown twice. */
    char result = grades(marks);

    if (result == 'X')
    {
        /* The error message was already printed inside grades().
           Nothing more to do here. */
    }
    else
    {
        printf("Grade: %c", result);
    }

    return 0;
}