#ifndef _DICTIONARY_H_
#define _DICTIONARY_H_
#include <stdbool.h>

/**
 * Copyright 2014 Maya Arbel (mayaarl [at] cs [dot] technion [dot] ac [dot] il).
 * 
 * This file is part of Citrus. 
 * 
 * Citrus is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * Author Maya Arbel
 */


#define infinity 2147483647 

typedef struct node_t* citrus_node;

    citrus_node citrus_init();
    int citrus_contains(citrus_node root, int key);
    bool citrus_insert(citrus_node root, int key, int value);
    bool citrus_delete(citrus_node root, int key);

#endif
