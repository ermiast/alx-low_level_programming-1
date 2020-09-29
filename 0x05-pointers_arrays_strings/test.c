#include <stdio.h>

int main(void) {
    int half;
  char s[] = "1234567";
  int len = 0, i = 0;

for (int len = 0; s[len]; len++);


half = len/2;
char temp;

while (half--)
{
	temp = s[len-i-1];
	s[len-i-1] = s[i];
	s[i] = temp; 
	i++;

}
puts(s);
  return 0;
}