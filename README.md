# ft_printf
A 42 school project aimed at re-building the behavior of the C library function `printf()` using variadic arguments.
The purpose of the exercise is to learn about variadic arguments manipulation while leveraging the Libft library previously built.

The formats read by `ft_printf()` in this exercise are :
* `%c` : a character.
* `%s` : a string.
* `%p`  : pointer argument printed in hex format.
* `%d` : a decimal (base 10) number.
* `%i` : an integer.
* `%u` : an unsigned decimal (base 10).
* `%x` (or `%X`) : a number in hexadecimal lowercase (or uppercase) : ex %x or %X print f5 or F5 for 245 in base10
* `%%` : a percent sign

## Status
Finished : 19/05/2023

Grade : 100/100

## Usage

`make` to compile

the `Makefile` will add the `ft_printf()` function to the `libft.a` library and rename it `libftprintf.a`, 
you can then compile any `main.c` file calling ft_printf and run it
```
cc main.c libftprintf.a

```
