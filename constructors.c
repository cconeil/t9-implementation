#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"header.h"

//Eeshan Londhe
//constructors.c
//Contains methods that create new linkedlist nodes as well as tree nodes.


//Creates a new list. Passes in a string that is then used to make the linkedlist node.
// returns a pointer to the new node.
struct listNode* newList(char* word) {
	struct listNode* node = (struct listNode*)malloc(sizeof(struct listNode));
	node->word = (char*)malloc(sizeof(char)*strlen(word));
	strncpy(node->word, word, strlen(word));
	node->word[strlen(word) - 1] = '\0';
	node->next = NULL;
	return node;
}

//Creates a new tree node.
// returns a pointer to the new node.
struct treeNode* newNode() {
	struct treeNode* node = (struct treeNode*)malloc(sizeof(struct treeNode));
	node->wordList = NULL;
	for (int i = 0; i < 8; i++) {
		node->nums[i] = NULL;
	}
	return node;
}

