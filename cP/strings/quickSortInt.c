#include <stdio.h>
#include <string.h>
/* FOLLOWING FUNCTIONS ARE ONLY FOR SORTING
    PURPOSE */
void exchange(int *a, int *b)
{
  int temp;
  temp = *a;
  *a   = *b;
  *b   = temp;
}

int partition(int A[], int si, int ei)
{
  int x = A[ei];
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
void quickSort(int A[], int si, int ei)
{
  int pi;    /* Partitioning index */
  if(si < ei)
  {
    pi = partition(A, si, ei);
    quickSort(A, si, pi - 1);
    quickSort(A, pi + 1, ei);
  }
}
int main(){
int a[6] = {10,2,11,98,65,33};
int i;
for(i=0; i<6; i++){
    printf("%d ", a[i]);
}
printf("\n");
quickSort(a,0,5);

for(i=0; i<6; i++){
    printf("%d,", a[i]);
}

return 0;
}





