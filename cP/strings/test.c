#include <stdio.h>
#include <string.h>
void exchange (int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
int partition(int A[], int si, int ei){
int x = A[ei];
int i = (si - 1);
int j;
for(j=si; j<= ei-1; j++){
if(A[j] <= x){
 i++;
 exchange(&A[i], &A[j]) ;
}
}
exchange(&A[i+1], &A[ei]);
return (i+1);
}
void quicks(int A[], int si, int ei){
int pi;
if(si<ei){
    pi = partition(A,si,ei);
    quicks(A,si,pi-1);
    quicks(A,pi+1,ei);
}
}
int main(){
int A[6] = {10,2,11,98,65,33};
int i;
for(i=0; i<6; i++){
    printf("%d ", A[i]);
}
printf("\n");
quicks(A,0,5);

for(i=0; i<6; i++){
    printf("%d,", A[i]);
}

return 0;
}
