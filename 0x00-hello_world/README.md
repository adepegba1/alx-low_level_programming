# This is the introduction to C programming language with some task in it
## Requirement for task
- **C**
  - Allowed editors: vi, vim, emacs
  - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
  - All your files should end with a new line
  - A README.md file at the root of the repo, containing a description of the repository
  - A README.md file, at the root of the folder of this project, containing a description of the project
  - There should be no errors and no warnings during compilation
  - You are not allowed to use system
  - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- **Shell Scripts**
  - Allowed editors: vi, vim, emacs
  - All your scripts will be tested on Ubuntu 20.04 LTS
  - All your scripts should be exactly two lines long ($ wc -l file should print 2)
  - All your files should end with a new line
  - The first line of all your files should be exactly #!/bin/bash
  
 ## Read More
 - [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221022%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221022T125230Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=891cf63c8135eadef9f0b243198b5d3babd2d18d3b32827e7d65f104939113b3)
 - [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
 - [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
 - [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
# List of Task
|Task| Description|
|---|---|
|0|Write a script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable $CFILE. The output should be saved in the file c|
|1|Write a script that compiles a C file but does not link. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .o instead of .c. **Example:** if the C file is main.c, the output file should be main.o|
|2|Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c. **Example:** if the C file is main.c, the output file should be main.s|
|3|Write a script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE|
|4|Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use the function puts. You are not allowed to use printf. Your program should end with the value 0|
|5|Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. Use the function printf. You are not allowed to use the function puts. Your program should return 0. Your program should compile without warning when using the -Wall gcc option|
|6|Write a C program that prints the size of various types on the computer it is compiled and run on. You should produce the exact same output as in the example Warnings are allowed. Your program should return 0
|7|Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. The C file name will be saved in the variable $CFILE. The output file should be named the same as the C file, but with the extension .s instead of .c. **Example:** if the C file is main.c, the output file should be main.s|
|8|Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts. Your program should return 1. Your program should compile without any warnings when using the -Wall gcc option|
