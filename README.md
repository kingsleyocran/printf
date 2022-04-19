# printf
```_printf``` is function that produces output according to a format.```_printf``` is custom implementation of the C programming  ```printf``` standard function and variadic function.

**Prototype:** ```int _printf(const char *, ...);```

**Returns:**
> the number of characters printed (excluding the null byte used to end output to strings)




## Example
**String - "%s"**
* Input: ```_printf("%s\n", 'This is a string.');```
* Output: ```This is a string.```

**Character - "%c"**
* Input: ```_printf("The first letter in the alphabet is %c\n", 'A');```
* Output: ```The first letter in the alphabet is A```

**Integer - "%i"**
* Input: ```_printf("There are %i dozens in a gross\n", 12);```
* Output: ```There are 12 dozens in a gross```

**Decimal - "%d"**
* Input: ```_printf("%d\n", 1000);```
* Output:  ```1000```





## Compilation:
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic

```gcc -Wall -Werror -Wextra -pedantic *.c```





## Betty coding style:
All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:

[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)






## Authorized functions and macros:
 * ```write``` (man 2 write)
 * ```malloc``` (man 3 malloc)
 * ```free``` (man 3 free)
 * ```va_start``` (man 3 va_start)
 * ```va_end``` (man 3 va_end)
 * ```va_copy``` (man 3 va_copy)
 * ```va_arg``` (man 3 va_arg)






## File Descriptions
* **_printf.c:** - contains the  function ```_printf```, which uses the prototype ```int _printf(const char *format, ...);```. The format string is composed of zero or more directives. See ```man 3 printf``` for more detail. **_printf** will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to **stdout**, the standard output stream.
* **_putchar.c:** - contains the function ```_putchar```, which writes a character to stdout.
* **main.h:** - contains all function prototypes used for ```_printf```.
* **man_3_printf:** - manual page for the custom ```_printf``` function.
* **handler.c** - contains functions ```handler``` and ```percent_handler```. ```handler``` is the controller for the string and the formats, and also does the counter for the numbers of bytes that are printing. ```percent_handler``` compare a list of possible specifiers with the current pattern, and return the corresponding function.
* **utils.c** - containers the helper functions ```print```, ```strlen``` and ```itoa```.  
* **print_string.c** - print a string
*	**print_char.c** - print just a char
*	**print_integer.c** -	print a number in base 10
*	**print_integer.c** -	print a number in base 10
*	**print_pointer.c** -	print a memory address in base 16 lowercase
*	**print_binary.c** -	print a number in base 2
*	**print_hexadecimal_low.c** -	print a number in base 16 lowercase
*	**print_hexadecimal_upp.c** -	print a number in base 16 uppercase
*	**print_octal	print.c** - a number in base 8
*	**print_rot	print.c** - a string encoded in rot13 format





## Mandatory Tasks
- [x] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%```.
- [x] Handle conversion specifiers ```d```, ```i```.
- [x] Create a man page for your function.




## Advanced Tasks
- [x] Handle conversion specifier ```b```.
- [x] Handle conversion specifiers ```u```, ```o```, ```x```, ```X```.
- [x] Use a local buffer of 1024 chars in order to call write as little as possible.
- [ ] Handle conversion specifier ```S```.
- [x] Handle conversion specifier ```p```.
- [ ] Handle flag characters ```+```, space, and ```#``` for non-custom conversion specifiers.
- [ ] Handle length modifiers ```l``` and ```h``` for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the ```0``` flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier ```r``` that prints the reversed string.
- [x] Handle the custom conversion specifier ```R``` that prints the rot13'ed string.
- [ ] All above options should work well together.





## Authors
* [Peter Adeyemo](https://github.com/adeyemodanointed)
* [Kingsley Ocran](https://github.com/kingsleyocran) 


