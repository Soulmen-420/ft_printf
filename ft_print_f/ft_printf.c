#include "ft_printf.h"

int     ft_printf(const char *restrict format, ...)
{
    va_list arg;
    int count = 0;

    va_start(arg, format);
    while(*format){
        if(*format == '%'){
             
        } 
        else 
        {
            ft_putchar(*format);
            count += 1;
        }
        format += 1;
    }
    va_end(arg);
    return(count);
}


int     main(void)
{
    printf("%d\n", ft_printf("hello\n", "bye\n"));
    ft_printf("Hello\n" "bye\n"); 
    return(0);
}
