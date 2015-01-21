#include<stdio.h>
void concat(char* ,char* );
void main(void)
{
   char str1[25],str2[25];
   printf("\nEnter First String:");
   gets(str1);
   printf("\nEnter Second String:");
   gets(str2);
   concat(str1,str2);                                //1
   printf("\nConcatenated String is %s",str1);
}
void concat(char *s1,char *s2)
{
     while(*s1!='\0')                                //2
             s1++;
     while(*s2!='\0')                                //3
     {
            *s1=*s2;                                 //4
             s1++;
             s2++;
     }
      *s1='\0';                                      //5
}
