# Singly Linked Lists

## General
>> How to use linked lists

## Requirements 
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc
3. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
4. You are not allowed to use global variables
5. The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
6. You are allowed to use _putchar
7. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
8. All your header files should be include guarded

|  Tasks    |  Description    |     File Name       |
|---------  |  -----------    | ------------------- |
| Task 0    | Print list      | 0-print_listint.c   |
| Task 1    | List length     | 1-listint_len.c     |
### Task 1: List Length
Write a function that returns the number of elements in a linked list
1. Prototype: size_t listint_len(const listint_t *h);
2. File: 1-listint_len.c

### Task 2: Add node
Write a function that adds a new node at the beginning of a list
1. Prototype: listint_t *add_nodeint(listint_t **head, const int n);
2. Return: the address of the new element, or NULL if it failed
3. File: 2-add_nodeint.c

### Task 3: Add node at the end
Write a function that adds a new node at the end of a list
1. Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
2. Return: the address of the new element, or NULL if it failed
3. File: 3-add_nodeint_end.c
