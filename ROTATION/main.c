#include "rotation.c"
#include <stdbool.h>

int main()
{
    int num;
    
    scanf("%d", &num);
    if (is_rotationally_same(num))
    {
        printf("Yes, the number reads the same upside-down.\n");
    }
    else
    {
        printf("No, the number does not read the same upside-down.\n");
    }

    return 0;
}