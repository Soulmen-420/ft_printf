#include "ft_printf.h"

int     ft_format_finder(const char *restrict format)
{
    char *format_array[] = {'c', 'd', 'i', 'f', 'o', 's', 'u', 'x', 'X', 'p', "\O"};
    int a = 0;
    while(!format_array[i]){
        if(format == format_array[a])
        return(format_array[a]);
        a++;
    }
    return(-1);
}

int     ft_printf(const char *restrict format, ...)
{
    va_list arg;
    int count = 0;

    va_start(arg, format);
    while(*format){
        if(*format == '%'){
            format += 1;
            if((!*format) || (ft_format_array(*format) <= 0)){
                break;
            }

//            format -= 1;
//            ft_putchar(*format);
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
    printf("%d\n", ft_printf("%c", "hello"));
//    ft_printf("Hello\n" "bye\n"); 
    return(0);
}
