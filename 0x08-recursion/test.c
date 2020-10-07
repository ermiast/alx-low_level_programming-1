#include <stdio.h>

int main(void) {

  char *test = "123";
  
  printf("Char is %c\n", *(test - 2) );
  return 0;
}