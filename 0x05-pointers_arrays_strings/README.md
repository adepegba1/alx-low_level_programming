## This is pointers, arrays and strings project
- A pointer is an address where variable are stored in the system. the size of pointer on a 64 bits machine is 8bytes and the format specifier is %p
	- **&** is a symbol for the address of a variable *e.g int i = &i;*
	- **\*** is a deferncing symbol to change the value of variable using pointer, also can be used to print the value of what the pointer is pointing to
	- A pointer always have the same data type with the vaule is pointing to
- Arrays are contiguous memory areas that hold a number of value of the same data type 
- A string are used tp store text or character using double quote and the format specifier is %s
# Read More
- [Pointers and arrays](https://alx-intranet.hbtn.io/concepts/60)
- [Data Structures](https://alx-intranet.hbtn.io/concepts/120)
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
# Requirement for Task
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
# List of Task
|Task|Description|
|---|---|
|0|Write a function that takes a pointer to an int as parameter and updates the value it points to to 98. Prototype: void reset_to_98(int *n);|
|1|Write a function that swaps the values of two integers. Prototype: void swap_int(int *a, int *b);|
|2|Write a function that returns the length of a string. Prototype: int _strlen(char *s);|
|3|Write a function that prints a string, followed by a new line, to stdout Prototype: void _puts(char *str);|
|4|Write a function that prints a string, in reverse, followed by a new line. Prototype: void print_rev(char *s);|
|5|Write a function that reverses a string. Prototype: void rev_string(char *s);|
|6|Write a function that prints every other character of a string, starting with the first character, followed by a new line. Prototype: void puts2(char *str);|
|7|Write a function that prints half of a string, followed by a new line. Prototype: void puts_half(char *str); The function should print the second half of the string If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2|
|8|Write a function that prints n elements of an array of integers, followed by a new line. Prototype: void print_array(int *a, int n); where n is the number of elements of the array to be printed Numbers must be separated by comma, followed by a space The numbers should be displayed in the same order as they are stored in the array You are allowed to use printf|
|9|Prototype: char *_strcpy(char *dest, char *src); Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Return value: the pointer to dest|
|10|Write a function that convert a string to an integer. Prototype: int _atoi(char *s); The number in the string can be preceded by an infinite number of characters You need to take into account all the - and + signs before the number If there are no numbers in the string, the function must return 0 You are not allowed to use long You are not allowed to declare new variables of “type” array You are not allowed to hard-code special values We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.|
|11|Create a program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c). You are allowed to use the standard library You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests) man srand, rand, time gdb and objdump can help|
