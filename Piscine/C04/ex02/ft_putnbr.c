#include <unistd.h>

void ft_putnbr (int nb) {
    char buffer[12];
    int i = 0;
    unsigned int num;

    if (nb < 0) 
    {
        write(1, "-", 1);
        num = (unsigned int) (-(long)nb);
    } else 
    {
        num = (unsigned int)nb;
    }

    if (num == 0) 
    {
        write(1, "0", 1);
        return;
    }

    while (num > 0) 
    {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
    }
    
    while (i > 0) 
    {
        write(1, &buffer[--i], 1);
    }
}