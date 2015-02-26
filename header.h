//Eeshan Londhe
//CSE 374 Homework 5
//2/20/15
//Header File
//Contains the structs for the linked list node and the tree node.

#ifndef HEADER_H
#define HEADER_H

// Struct for the tree nodes
struct treeNode {
	struct treeNode* nums[8];
	struct listNode* wordList;
};

// Struct for the linked list that exists in each node
struct listNode {
	char* word;
	struct listNode* next;
};

struct treeNode* newNode();
struct listNode* newList(char* word);
typedef struct treeNode treeNode;
typedef struct listNode listNode;

#endif
