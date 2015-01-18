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
#include <cassert>
#include "citrus.h"
#include "urcu.h"

int main(int argc, char** args) {
    citrus_node root = citrus_init();
    initURCU(4);
    urcu_register(0);
    assert(citrus_insert(root, 1,11));
    assert(citrus_insert(root, 2,12));

    assert(citrus_contains(root,1) == 1);
//    assert(citrus_contains(root,3) == 0); 
    return 0;
}
