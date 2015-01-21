#include<stdio.h>
int main(){
    char string[] = "sumit singh";
    int i=0;

    printf("%s\n", string);

    while(string[i]!='\0'){
        if(string[i] == "")
        continue;
      printf("%c-", string[i]);
      string[i] = string[i] + 'A' - 'a';
      printf("%c\n", string[i]);
      i++;
    }
    //printf("%s\n", string);
    puts(string);
}

