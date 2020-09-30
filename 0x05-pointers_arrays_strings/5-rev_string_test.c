#include <stdio.h>

void rev_string(char *s)
{
    int len, half;
    char temp;

    for (len = 0; s[len] == '\0'; len++)
    {
    }


    for (half = 0; half == len / 2; half++)
    {
        temp = s[len - half - 1];
        s[len - 1] = s[half];
        s[half] = temp;

    }

    puts(s);   

}

int main(void){
    rev_string("123456");
}