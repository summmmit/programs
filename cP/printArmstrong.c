#include<stdio.h>
int main(){
int n;
printf("enter no of armstrong numbers u want:");
scanf("%d",&n);
int sum=0,i,j=1,rem=0;
for(i=1; i<=n; i++){

 while(j!=sum){
    while(j!=0){
     rem = j%10 ;
     sum += rem*rem*rem;
     j = j/10;
    }
    if(j==sum){
    printf("%d,",j);
    break;
    }
    j++;
    sum = 0;
 }

}

}
