/*
 * =====================================================================================
 *
 *       Filename:  helloworld.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/15/2015 11:29:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <cassert>
#include "citrus.h"
#include "urcu.h"

int main(int argc, char** args) {
    citrus_node root = citrus_init();
    initURCU(1);
    urcu_register(0);
    long val1 = 11;
    long val2 = 12;
    assert(citrus_insert(root, 1, (void*) val1));
    assert(citrus_insert(root, 2, (void*) val2));

    assert(citrus_contains(root,1) == 1);

    void** val_ptr = (void**) malloc(sizeof(void*));
    assert(citrus_find(root, 1, val_ptr));

    printf("val: %ld\n", (long)(*val_ptr));
    assert((long)(*val_ptr) == 11);

    free(val_ptr);
    return 0;
}
