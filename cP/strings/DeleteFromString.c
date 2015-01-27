#include <stdio.h>
#define No_of_chars 256
int main(){
char a[] = "sumit hello ";
char b[] = "singh";

int map[No_of_chars] = {0};
int i=0;
while(*(b+i++)){
   if(map[*(b+i)] == 0)
    map[*(b+i)] = 1;

}

i=1;
int j=0, s=0;
while(*(a+i)){
    if(*(a+i) == *(b+j)){
      *(a+s) = *(a+i);
      s++;
    }
    i++; j++;
}

for(i=0; i<No_of_chars; i++){
    printf("%d", map[i]);
}

printf("\n%s", a);


}
