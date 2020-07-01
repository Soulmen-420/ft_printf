#ifndef __FT_PRINTF_H__
# define __FT_PRINTF_H__

    #include "/Users/tjeerd/libft/ft_include.h"    

    #include <unistd.h>
    #include <stdlib.h>
    #include <stdarg.h>

    #define BUFF_SIZE 1024 + 1

//defining all formats for printf
    
//    #define c 1
//    #define d 2
//    #define i 3
//    #define f 4
//    #define o 5
//    #define s 6
//    #define u 7
//    #define x 8
//    #define X 9
//   #define p 10

//prototype of all the functions 
//necesairy functions for ft_printf

    int     ft_printf(const char *restrict format, ...);
    char    ft_printf_char(const char *restrict chr, char *buffer);

#endif
