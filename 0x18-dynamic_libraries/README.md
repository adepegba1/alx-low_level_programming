# DYNAMIC LIBRARIES PROJECT 
## Read More 
- [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
## Requirement of Task
- **C**
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
  - In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
  - Don’t forget to push your header file
- **Bash**
  - Allowed editors: vi, vim, emacs
  - All your scripts will be tested on Ubuntu 20.04 LTS
  - All your files should end with a new line (why?)
  - The first line of all your files should be exactly #!/bin/bash
  - A README.md file, at the root of the folder of the project, describing what each script is doing
  - All your files must be executable
## List of Task
- **Create the dynamic library libdynamic.so containing all the functions listed below:**
###
    int _putchar(char c);
    int _islower(int c);
    int _isalpha(int c);
    int _abs(int n);
    int _isupper(int c);
    int _isdigit(int c);
    int _strlen(char *s);
    void _puts(char *s);
    char *_strcpy(char *dest, char *src);
    int _atoi(char *s);
    char *_strcat(char *dest, char *src);
    char *_strncat(char *dest, char *src, int n);
    char *_strncpy(char *dest, char *src, int n);
    int _strcmp(char *s1, char *s2);
    char *_memset(char *s, char b, unsigned int n);
    char *_memcpy(char *dest, char *src, unsigned int n);
    char *_strchr(char *s, char c);
    unsigned int _strspn(char *s, char *accept);
    char *_strpbrk(char *s, char *accept);
    char *_strstr(char *haystack, char *needle);

- If you haven’t coded all of the above functions create empty ones, with the right prototype.
Don’t forget to push your main.h file in your repository, containing at least all the prototypes of the above functions.
- **Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.**
###
    julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c
    abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c
    atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c
    julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 
    julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 
    0000000000000a90 T _abs
    0000000000000aa9 T _atoi
    0000000000202048 B __bss_start
    0000000000202048 D _edata
    0000000000202050 B _end
    00000000000011f8 T _fini
    0000000000000900 T _init
    0000000000000bd7 T _isalpha
    0000000000000c04 T _isdigit
    0000000000000c25 T _islower
    0000000000000c46 T _isupper
    0000000000000c67 T _memcpy
    0000000000000caa T _memset
    0000000000000ce9 T _putchar
    0000000000000d0e T _puts
    0000000000000d4a T _strcat
    0000000000000dcf T _strchr
    0000000000000e21 T _strcmp
    0000000000000e89 T _strcpy
    0000000000000eeb T _strlen
    0000000000000f15 T _strncat
    0000000000000fa5 T _strncpy
    0000000000001029 T _strpbrk
    000000000000109d T _strspn
    0000000000001176 T _strstr
    julien@ubuntu:~/0x18. Dynamic libraries$ 
