#include <stdio.h>
#include <string.h>
int main() {
 
char s[1000];
 scanf("%s", s);
 
  s[0] = toupper(s[0]);
 printf("%s\n", s);

    return 0;
}