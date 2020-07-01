#include "ft_printf.h"

char        ft_printf_char(const char *restrict chr, char *buffer)
{
    int i = 0;
    buffer[i] = chr[i];
//    while(buffer[i] != '\0'){
        ft_putchar(buffer[i]);
//        i++;
//    }    
    return(i);
}
