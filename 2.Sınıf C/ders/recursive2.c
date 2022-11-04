#include <stdio.h>

int count(x)
{
    if (x == 1)
        return (1);
    return (x + count(x - 1));
}
int main()
{
    printf("%d", count(6));
}