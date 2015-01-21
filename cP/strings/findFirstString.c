#include<stdio.h>
#include"getcharcountarray.c"
int concat(char *str,char m)
{
    int i=0;
    int *count = getCharCountArray(str);
    while(*(str+i)){
        if(*(str+i) == m)
             return count[*(str+i)];
             i++;
    }                                 //5
}

int main(){
    char str1[] = "geeksforgeeks";
    printf("enter char to find:");
    char i;
    scanf("%c", &i);
    int n = concat(str1, i);
    printf("%d", n);
}
