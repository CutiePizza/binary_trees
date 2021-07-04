# [![](holberton-logo.png) Holberton School C - Binary trees Project](https://www.holbertonschool.com/tn/en/pathways)

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/binary_tree.jpg" align="center" width="100%" height="100%">

# 🧑🏻‍💻 Intro

A binary tree is a data structure which can be represented in the form of a hierarchy of which each element is called node, the initial node being called root.


## 🕵️ Important Terms

###### Path:
    Path refers to the sequence of nodes along the edges of a tree.

###### Root:
    The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

###### Parent:
    Any node except the root node has one edge upward to a node called parent.

###### Child:
    The node below a given node connected by its edge downward is called its child node.

###### Leaf:
    The node which does not have any child node is called the leaf node.

###### Subtree:
    Subtree represents the descendants of a node.

###### Visiting:
    Visiting refers to checking the value of a node when control is on the node.

###### Traversing:
    Traversing means passing through nodes in a specific order.

###### Levels:
    Level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1,
    its grandchild is at level 2, and so on.

###### keys:
    Key represents a value of a node based on which a search operation is to be carried out for a node.

## 👉 Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## 👉 Binary Search Tree

```c
typedef struct binary_tree_s bst_t;
```

## 👉 AVL Tree

```c
typedef struct binary_tree_s avl_t;
```

## 👉 Max Binary Heap

```c
typedef struct binary_tree_s heap_t;
```

## 👉 Print function

[Used function for printing the binary tree;](https://github.com/holbertonschool/0x1C.c)

## Extra ressources

- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

<hr>

By [Inès](https://www.linkedin.com/in/ines-chokri) & [Khouloud](https://www.linkedin.com/in/khouloud-alkhammassi-3a9078129) Software engineers at [HolbertonSchool®️](https://www.holbertonschool.com)