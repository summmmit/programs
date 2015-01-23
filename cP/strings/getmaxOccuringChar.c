#include <stdio.h>
#include "getcharcountarray.c"
int main(){
    char str[] = "geeksforgeeks";
    int *count = getCharCountArray(str);
    int max=0,i=0;
    char c;
    while(*(str + i)){
        if(count[*(str+i)] > max)
        max = i;
      i++;
    }
    printf("%c", *(str+max));

    return 0;
}
