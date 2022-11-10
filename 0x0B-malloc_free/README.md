# This is the automatic and Dynamic Project using Malloc and Free function in C with the header of <stdlib.h>
##Read More
- [malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221110%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221110T093703Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=06bab2b0e2fc02f4b93cc41478c61b10666a559ec43cc40b32f0cc8de3e9666e)
## Requirement for Task
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
## list of Task
|task| Description|
|---|---|
|0|Write a function that creates an array of chars, and initializes it with a specific char. Prototype: char *create_array(unsigned int size, char c); Returns NULL if size = 0 Returns a pointer to the array, or NULL if it fails|
|1|Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. Prototype: char *_strdup(char *str); The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free. Returns NULL if str = NULL On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available|
|2|Write a function that concatenates two strings. Prototype: char *str_concat(char *s1, char *s2); The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated if NULL is passed, treat it as an empty string The function should return NULL on failure|
|3|Write a function that returns a pointer to a 2 dimensional array of integers. Prototype: int **alloc_grid(int width, int height); Each element of the grid should be initialized to 0 The function should return NULL on failure If width or height is 0 or negative, return NULL|
|4|Write a function that frees a 2 dimensional grid previously created by your alloc_grid function. Prototype: void free_grid(int **grid, int height); Note that we will compile with your alloc_grid.c file. Make sure it compiles.|
|5|Write a function that concatenates all the arguments of your program. Prototype: char *argstostr(int ac, char **av); Returns NULL if ac == 0 or av == NULL Returns a pointer to a new string, or NULL if it fails Each argument should be followed by a \n in the new string|
|6|Write a function that splits a string into words. Prototype: char **strtow(char *str); The function returns a pointer to an array of strings (words) Each element of this array should contain a single word, null-terminated The last element of the returned array should be NULL Words are separated by spaces Returns NULL if str == NULL or str == "" If your function fails, it should return NULL|

