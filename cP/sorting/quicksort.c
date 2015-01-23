#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quickSort(char A[], int si, int ei);
void exchange(char *a, char *b);
int partition(char A[], int si, int ei);
int main(){
char a[] = "geeksforgeeks";
int ei = strlen(a);

printf("%s\n", a);
quickSort(a, 0, ei-1);
printf("%s\n", a);

return 0;
}

/* FOLLOWING FUNCTIONS ARE ONLY FOR SORTING
    PURPOSE */
void exchange(char *a, char *b)
{
  char temp;
  temp = *a;
  *a   = *b;
  *b   = temp;
}

int partition(char A[], int si, int ei)
{
  char x = A[ei];
  int i = (si - 1);
  int j;

  for (j = si; j <= ei - 1; j++)
  {
    if(A[j] <= x)
    {
      i++;
      exchange(&A[i], &A[j]);
    }
  }
  exchange (&A[i + 1], &A[ei]);
  return (i + 1);
}

/* Implementation of Quick Sort
A[] --> Array to be sorted
si  --> Starting index
ei  --> Ending index
*/
void quickSort(char A[], int si, int ei)
{
  int pi;    /* Partitioning index */
  if(si < ei)
  {
    pi = partition(A, si, ei);
    quickSort(A, si, pi - 1);
    quickSort(A, pi + 1, ei);
  }
}



