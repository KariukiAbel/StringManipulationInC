#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  char ch;
  char st[20];
  char sen[100];
  scanf("%c", &ch);
  scanf("%s\n",&st);
  scanf("%[^\n]%*c", sen);
  printf("%c\n", ch);
  printf("%s\n", st);
  printf("%s",sen);

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  return 0;
}
