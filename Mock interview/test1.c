#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cp(void)
{
    char *s;

    s = malloc(9);
    strcpy(s, "Holberton");
    puts(s);
    return (0);
}

int main(void) {
  cp();
  return 0;
}