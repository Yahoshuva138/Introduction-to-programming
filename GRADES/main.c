#include "grades.c"

int main()
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);

    /* Call grades() ONCE and store the result before printing. */
    char result = grades(marks);

    if (result == 'X')
    {
        /* The function report()/grades() must not print anything,
           so main() prints the error message for invalid marks. */
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
    }
    else
    {
        printf("Grade: %c\n", result);
    }

    return 0;
}