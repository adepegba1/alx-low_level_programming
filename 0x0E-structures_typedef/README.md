# This is a project on the Structures and Typedef in C.
## Read More
- [Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221115%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221115T152628Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ae6665a82fa6087e3b497538278ddcf149681d104e5e367a6999c42e67062e87)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221115%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221115T152750Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=61ded66d06e60da28e4fdd0dd1faa4d7c0196b72eec54c23d33fb4463a167e4f)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
## Requirement for the Task
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are printf, malloc, free and exit.
- Don’t forget to push your header file
- All your header files should be include guarded
## List of Task
|tasks|Description|
|---|---|
|0|Define a new type struct dog with the following elements: name, type = char * age, type = float owner, type = char *|
|1| Write a function that initialize a variable of type struct dog Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);|
|2| Write a function that prints a struct dog Prototype: void print_dog(struct dog *d); Format: see example bellow You are allowed to use the standard library If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil)) If d is NULL print nothing.|
|3|Define a new type dog_t as a new name for the type struct dog.|
|4|Write a function that creates a new dog. Prototype: dog_t *new_dog(char *name, float age, char *owner); You have to store a copy of name and owner Return NULL if the function fails|
|5|Write a function that frees dogs. Prototype: void free_dog(dog_t *d);

