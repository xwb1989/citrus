#ifndef _DICTIONARY_H_
#define _DICTIONARY_H_

#include <stdbool.h>

#define infinity 2147483647 

typedef struct node_t* node;

node init();
int contains(node root, int key);
bool insert(node root, int key, int value);
bool delete(node root, int key);

#endif