#include <stdio.h>
#include <string.h>
#include "getcharcountarray.c"
//#include "quicksort.c"

int main(){
char a[] = "geeksforgeeks";

int *count = getCharCountArray(a);
int i=0;

for(i=0; i<NO_OF_CHARS; i++){
    if(count[*(a +i)] > 1){
    printf("%c", *(a+i));
    }
}

}
