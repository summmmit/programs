#include<stdio.h>
void concat(char *s1,char *s2)
{
     while(*s1!='\0')                                //2
             s1++;
     *s1 = "";
     s1++;
     while(*s2!='\0')                                //3
     {
            *s1=*s2;                                 //4
             s1++;
             s2++;
     }
      *s1='\0';                                      //5
}
int main(){
    char str1[] = "sumit";
    char str2[] = "singh";
    concat(str1, str2);

    printf("%s", str1);
}
