//
//created by alexey romanovets
//

#include "adding_number.h"
#include "locale.h"
#include "stddef.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char* f(char* line){
    char *str = malloc(strlen(line));
    memset(str, 0, sizeof str);
    char *str1 = malloc(strlen(line));
    for(int i = 0; i < strlen(line); i++) {
      sprintf(str1, "%c%d", line[i], (int)(line[i]));
      strcat(str, str1);
    }
  return str;
}
