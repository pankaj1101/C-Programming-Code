#include <stdio.h>
int main()
{

  /* char str[7] = "String";
  char *s = str;

  for (int i = 0; str[i] != '\0'; i++)
  {
    printf("%c", *(s + i));
  }*/

  /* char *p[] = {"pankaj", "golu", "Deepak"};
   printf("%s", *p + 1);
   printf("\n%s", *(p + 1));
 */

  int x[] = {1, 2, 3, 4, 5};
  int *p = x;

  printf("%d", *p);
  printf("\n%d", *(p + 1));
  printf("\n%d", x[0]);

}
