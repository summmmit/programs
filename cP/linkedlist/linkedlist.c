#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *newNode(int data){

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
};

int main(){

struct node *start = NULL;
int n=3;
int data;
while(n--){
    printf("Enter data to insert:");
    scanf("%d", &data);

    struct node *newNode = newNode(data);


}

while(start!=NULL)
if(start->next != NULL){
    printf("%d->", start->data);
    start = start->next;
}
}
