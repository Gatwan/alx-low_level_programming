# File I/O

# General
1. How to create, open, close, read and write files
2. What are file descriptors
3. What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
4. How to use the I/O system calls open, close, read and write
5. What are and how to use the flags O\_RDONLY, O\_WRONLY, O\_RDWR
6. What are file permissions, and how to set them when creating a file with the open system call
7. What is a system call
8. What is the difference between a function and a system call

# Requirements
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc
3. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
4. You are not allowed to use global variables
5. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
6. You are allowed to use \_putchar
7. The prototypes of all your functions and the prototype of the function \_putchar should be included in your header file called function\_pointers.h
8. All your header files should be include guarded

# Files
All the following files have been written in C

| File Name  | Description  |
|----------- | ------------ |
| 0-read\_textfile.c  | Write a function that reads a text file and prints it to the POSIX standard output. |
| 1-create\_file.c | Create a function that creates a file. |
| 2-append\_text\_to\_file.c | Write a function that appends text at the end of a file. |
| 3-cp.c | Write a program that copies the content of a file to another file. |
