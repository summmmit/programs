#include<stdio.h>
int main(){
int a[10] = {55,11,22,44,33,66};
int i,j,t;
//check non zero elements and print them
for(i=0,j=0; i<10; i++){
printf("%d ", a[i]);
if(a[i]!=0)
    j++;
}
printf("\n");
//move elements to right
for(i=j; i>=0; --i){
    a[i+1] = a[i];
}
printf("%d", i);
a[i+1]=89;
printf("\n");
//simple printing them
for(i=0; i<10; i++){
printf("%d ", a[i]);
}
}

