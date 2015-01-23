#include<stdio.h>
int main(){
int a[10] = {55,11,22,44,33,66};
int i,j;
int p;
int n;
//check non zero elements and print them
printf("this is your array:\n");
for(i=0,j=0; i<10; i++){
printf("%d ", a[i]);
if(a[i]!=0)
    j++;
}
printf("\n");
printf("Enter the postion:");
scanf("%d",&p);
printf("Enter the Number:");
scanf("%d",&n);
//move elements to right till the specified position
for(i=j-2; i>=p-1; i--){
    a[i+1] = a[i];
}
printf("%d", i);
a[i-1]=n;
printf("\n");
//simple printing them
printf("this is new array:\n");
for(i=0; i<10; i++){
printf("%d ", a[i]);
}
}


