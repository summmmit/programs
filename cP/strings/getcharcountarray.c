#include <stdlib.h>
#define NO_OF_CHARS 256
int *getCharCountArray(char *str)
{
  int *count = (int *)calloc(NO_OF_CHARS, sizeof(int));
  int i;

  for (i = 0; *(str+i);  i++)
    count[*(str+i)]++;
 printf("\nI am In getCharCountArray\n");
  return count;
}
