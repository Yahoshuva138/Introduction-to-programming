#include "rotation.c"
#include <stdbool.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    if (is_rotationally_same(num))
    {
        printf("Yes, the number can be read upside down.\n");
    }
    else
    {
        printf("No, the number cannot be read upside down.\n");
    }

    return 0;
}