#include <stdio.h>
#define max 3
#define true 1
#define false 0
int top = -1;
int a[max];
int ifEmpty(){
    if(top == -1)
        return true;
    else
        return false;
}

int ifNotFull(){
    if(top < max-1)
       return true;
    else
       return false;
}

int pushStack(value){
        a[++top] = value;
}

int popStack(){
    int value = a[top];
    a[top--] = 0;
    return value;
}

void printStack(){
int i;
printf("Your Stack is: \n");
printf("-----\n");
for(i=max-1; i>=0; i--){
    printf("| %d |\n", a[i]);
}
printf("-----\n");
}

int main(){
while(1){
    printf("Enter what you want to do \n");
    printf("1. Insert\n");
    printf("2. Pop\n");
    printf("9. Break\n");
    printf("Enter your Choice:");

    int c, n, m, t;
    scanf("%d", &c);

    if(c == 9)
       break;

    switch(c){

    case 1:
        if(ifNotFull()){
            printf("Enter Value to Insert:");
            scanf("%d" ,&n);
            pushStack(n);

        }else{
            printf("Stack is Full\n");
        }

        break;

    case 2:
        if(ifEmpty())
              printf("Stack is Empty\n");
            else
            {
                t = popStack();
                if(t)
                    printf("Value Poped out is:%d \n", t);
            }
        break;
    }
    printStack();
}

printf("THank You\n");

}
