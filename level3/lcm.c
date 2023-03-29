#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int max = (a > b) ? a : b; 
    unsigned int lcm = max;

    if ( a == 0 || b == 0)
        return (0);
    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
            return (lcm);
        lcm += max;
    }
    return (0);
}

int main()
{
    printf("LCM of %d and %d is : %u", 90, 60, lcm(90, 60));
    return (0);
}