/* hello.c */
#include <stdio.h>
#include <string.h>

void main (void)
{
	char str[] = "test";
  for(int i = 0; i < strlen(str); i++) {
    printf("%c%d", str[i], (int)str[i]);
  }
}
