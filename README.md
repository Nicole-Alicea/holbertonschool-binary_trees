# Holberton - Binary trees

## Overview

In this project we learn about how to qualify trees as well as how to traverse them.

## Requirements

General:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded

## Header File

* [binary_trees.h]

Data Structures:

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

Prototypes:

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

void binary_tree_delete(binary_tree_t *tree);

int binary_tree_is_leaf(const binary_tree_t *node);

int binary_tree_is_root(const binary_tree_t *node);

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

size_t binary_tree_height(const binary_tree_t *tree);

size_t binary_tree_depth(const binary_tree_t *tree);

size_t binary_tree_size(const binary_tree_t *tree);

size_t binary_tree_leaves(const binary_tree_t *tree);

size_t binary_tree_nodes(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree);

int binary_tree_is_full(const binary_tree_t *tree);

int binary_tree_is_perfect(const binary_tree_t *tree);

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

binary_tree_t *binary_tree_uncle(binary_tree_t *node);

## Tasks

0. New node

- Write a function that creates a binary tree node

1. Insert left

- Write a function that inserts a node as the left-child of another node

2. Insert right

- Write a function that inserts a node as the right-child of another node

3. Delete

- Write a function that deletes an entire binary tree

4. Is leaf

- Write a function that checks if a node is a leaf

5. Is root

- Write a function that checks if a given node is a root

6. Pre-order traversal

- Write a function that goes through a binary tree using pre-order traversal

7. In-order traversal

- Write a function that goes through a binary tree using in-order traversal

8. Post-order traversal

- Write a function that goes through a binary tree using post-order traversal

9. Height

- Write a function that measures the height of a binary tree

10. Depth

- Write a function that measures the depth of a node in a binary tree

11. Size

Write a function that measures the size of a binary tree

12. Leaves

- Write a function that counts the leaves in a binary tree

13. Nodes

- Write a function that counts the nodes with at least 1 child in a binary tree

14. Balance factor

- Write a function that measures the balance factor of a binary tree

15. Is full

- Write a function that checks if a binary tree is full

16. Is perfect

- Write a function that checks if a binary tree is perfect

17. Sibling

- Write a function that finds the sibling of a node

18. Uncle

- Write a function that finds the uncle of a node

## Authors

- [Nicole Alicea](https://github.com/Nicole-Alicea)
- [Mitzael Pitre](https://github.com/MitzaelPitre)
- [Raphael apellido](git hub account)
