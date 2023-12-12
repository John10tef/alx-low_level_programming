# 0x13. C - More singly linked lists

## Description
This project focuses on working with singly linked lists in C. It includes several tasks that involve manipulating and traversing linked lists.

## Learning Objectives
By completing this project, you are expected to:

- Understand how to use linked lists
- Develop the ability to search for relevant information independently
- Demonstrate proficiency in using the Betty style for coding
- Practice working with dynamic memory allocation and freeing memory
- Gain knowledge of basic operations on linked lists, such as adding nodes, deleting nodes, and reversing the list

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with the following flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- Each function should have no more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Functions such as `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, as it will be provided and used for testing
- All function prototypes should be included in the header file `lists.h`
- Don't forget to push your header file
- All header files should be include guarded

## Tasks

### 0. Print list
- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes in the list
- Format: see example in the task description
- You are allowed to use `printf`

### 1. List length
- Prototype: `size_t listint_len(const listint_t *h);`
- Return: the number of elements in a linked `listint_t` list

### 2. Add node
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### 3. Add node at the end
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### 4. Free list
- Prototype: `void free_listint(listint_t *head);`

### 5. Free
- Prototype: `void free_listint2(listint_t **head);`
- The function sets the head to `NULL`

### 6. Pop
- Prototype: `int pop_listint(listint_t **head);`
- Return: the head node's data (`n`)
- If the linked list is empty, return `0`

### 7. Get node at index
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Return: the nth node of a linked `listint_t` linked list, where `index` is the index of the node (starting at 0)
- If the node does not exist, return `NULL`

### 8. Sum list
- Prototype: `int sum_listint(listint_t *head);`
- Return: the sum of all the data (`n`) of a `listint_t` linked list
- If the list is empty, return `0`

### 9. Insert
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- Return: the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### 10. Delete at index
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- Return: `1` if it succeeded, `-1` if it failed
- Delete the node at index `index` of a `listint_t` linked list
