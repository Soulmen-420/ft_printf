#include "ft_printf.h"

int     ft_format_finder(const char *restrict format, char *buffer)
{
    char format_array[] = {'c', 'd', 'i', 'f', 'o', 's', 'u', 'x', 'X', 'p', '\0'};
    int a = 0;
    while(format_array[a]){
        if(*format == format_array[a]){
            if(format_array[a] == 'c'){
                format += 1;
                ft_printf_char(format, buffer);
                return(format_array[a]);
            }
            printf("%s\n", format);
            return(format_array[a]);
        }
        a++;
    }
    return(-1);
}

int     ft_printf(const char *restrict format, ...)
{
    va_list arg;
    int count = 0;
    unsigned int i = 0;
    char buffer[BUFF_SIZE];

    va_start(arg, format);
    while(!*format){
        if(*format == '%'){
            format += 1;
            if((!*format) || (ft_format_finder(format, buffer) <= 0)){
                break;
            } else {
                
                printf("format in ascii = %d\n", ft_format_finder(format, buffer));
                
            }
        } 
        else if(*format) 
        {
            ft_printf_string(buffer);
            return(0)
        }
        buffer[i] = format[i];
        i++;
    }
    va_end(arg);
    printf("count = %d\n", count);
    printf("buffer = %s\n", buffer);
    
    return(count);
}


int     main(void)
{
    printf("main count = %d\n", ft_printf("hello\n", "bye\n"));
    ft_printf("%c", "h");
//    ft_printf("Hello\n" "bye\n"); 
    return(0);
}
