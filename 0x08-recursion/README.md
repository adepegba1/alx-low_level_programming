# Project on Recursion
## Read More
- [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221028%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221028T090720Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8abb42fd390586061345d80f3f180dad249a0e3f2f2c8adfe6cb11fc32540c03)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
## Requirement for Task
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
- You are not allowed to use any kind of loops
- You are not allowed to use static variables
## List of Task
|Tasks| Description|
|---|---|
|0|Write a function that prints a string, followed by a new line. Prototype: void _puts_recursion(char *s);|
|1|Write a function that prints a string in reverse. Prototype: void _print_rev_recursion(char *s);|
|2|Write a function that returns the length of a string. Prototype: int _strlen_recursion(char *s);|
|3|Write a function that returns the factorial of a given number. Prototype: int factorial(int n); If n is lower than 0, the function should return -1 to indicate an error Factorial of 0 is 1|
|4|Write a function that returns the value of x raised to the power of y. Prototype: int _pow_recursion(int x, int y); If y is lower than 0, the function should return -1|
|5|Write a function that returns the natural square root of a number. Prototype: int _sqrt_recursion(int n); If n does not have a natural square root, the function should return -1|
|6|Write a function that returns 1 if the input integer is a prime number, otherwise return 0. Prototype: int is_prime_number(int n);|
|7|Write a function that returns 1 if a string is a palindrome and 0 if not Prototype: int is_palindrome(char *s); An empty string is a palindrome|
|8|Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0. Prototype: int wildcmp(char *s1, char *s2); s2 can contain the special character *. The special char * can replace any string (including an empty string)|
