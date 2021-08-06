# 0x01. Insert in sorted linked list


## Requirements
- Compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra` and `-pedantic`
- Code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## Tasks

### 0. Insert in sorted linked list

Write a function in C that inserts a number into a sorted singly linked list.

- Prototype: `listint_t *insert_node(listint_t **head, int number);`
- Return: the address of the new node, or `NULL` if it failed
