// int ft_factorial(int index)
// {
//     if (index <= 1)
//         return (1);
//     else if(index < 0)
//         return (0);
//     else
//         return (index * ft_factorial(index - 1));
// }

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    else if (index == 0)
        return (0);
    else if (index == 1)
        return (1);
    else
        return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int ft_sqrt(int index)
// {
//     int sqrt;

//     sqrt = 1;
//     while (sqrt * sqrt <= index)
//     {
//         if (sqrt * sqrt == index)
//             return (sqrt);
//         sqrt++;
//     }
// }

// int ft_power(int index, int ust)
// {
//     if (ust < 0)
//         return 0;
//     else if (ust == 0)
//         return 1;
//     else
//         return (index * ft_power(index, ust - 1));
// }

// #include <stdio.h>
// int main()
// {
//     printf("%d", ft_fibonacci(5));
// }