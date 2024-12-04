//
// Created by noobcodermsi on 2/1/24.
//

#ifndef LEARNINGCLANG_LINKEDLISTHEADER_H
#define LEARNINGCLANG_LINKEDLISTHEADER_H

#endif // LEARNINGCLANG_LINKEDLISTHEADER_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

struct linked_list {
  int number;
  struct linked_list *next;
  struct linked_list *prev;
  char node_name[6];
};
typedef struct linked_list node;
