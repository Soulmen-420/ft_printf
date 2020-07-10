#include "ft_printf.h"

int     ft_format_finder(const char *restrict format, va_list arg)
{
    char *format_array[] = {"%c", "%d", "%i", "%f", "%o", "%s", "%u", "%x", "%X", "%p"};
    int a = 0;
    static int count = 0;
    while(format_array[a]){
        if(format[a] == *format_array[0]){
            count++;
            printf("%d\n", count);
            int buffer = va_arg(arg, int);
            printf("buffer afther va_arg: %c\n", buffer);
            ft_printf_char(buffer);
            printf("format finder format :%s\n", format_array[a]);
            return(1);
        }
        a++;
    }
    return(-1);
}

int     ft_printf(const char *restrict format, ...)
{
    va_list arg;
    int count = 0;
    int arg_len = 0;

    va_start(arg, format);
    arg_len = ft_strlen(format);
    printf("arg len: %d\n", arg_len);
    while(*format){
        if(*format == '%'){
            if((!*format) || (ft_format_finder(format, arg) <= 0)){
                break;
            } else {
                printf("\nformat finder 1 succes else error = %d\n\n", ft_format_finder(format, arg));
                break;
            }
        } else if(count == arg_len){
            printf("Max count, no percent found, string is: %s ", format);
            return(0);
        }
        count++;
    }
    printf("va_end reached");
    va_end(arg);
    return(count);
}


int     main(void)
{
    ft_printf("%c", "h");
//    printf("main count = %d\n", ft_printf("hello\n", "bye\n"));
//    ft_printf("Hello\n" "bye\n" "goodjob\n"); 
    return(0);
}
