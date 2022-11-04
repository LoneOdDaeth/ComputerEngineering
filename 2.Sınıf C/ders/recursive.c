#include <stdio.h>

void    count(int index)
{
    printf("%d", index);
    if (index < 9)
        count(index + 1);
    printf("%d", index);
}

int main()
{
    count(5);
}