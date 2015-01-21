#include<stdio.h>
char xstrcmp(char *str1, char *str2){
    int i=0,j=0,k=0;
    char *dStr1 = str1;
    char *dStr2 = str2;

    while(*dStr1!='\0'){
        i++;
        dStr1++;
    }
    while(*dStr2!='\0'){
     j++;
     dStr2++;
    }
    if(i!=j){
        return 0;
    }
    else{
    while(*str1!='\0'){
        if(*str1!=*str2){
               return *str1 - *str2;
        }
        k++;
        str1++; str2++;
    }
    }
}
int main(){
    char *str1 = "sumit";
    char *str2 = "singh";
    char i= xstrcmp(str1, str2);

    printf("\n%d",i);


}
