
#include<stdio.h>
#include<stdlib.h>
void search(int num,struct node *head){
    struct node *ptr=NULL;
   ptr=head;
   while(ptr!=NULL){
    if(struct node ptr->data==num){
        printf("Successful");
    }
    ptr=ptr->next;
   }
   printf("Unsuccessful");
}
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct  Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;
    a=(struct  Node*)malloc(sizeof(struct  Node));
     b=(struct  Node*)malloc(sizeof(struct  Node));
      c=(struct  Node*)malloc(sizeof(struct  Node));
      a->data=10;
       b->data=20;
        c->data=30;
        a->next=b;
         b->next=c;
          c->next=NULL;
          //printf("Enter search num:");
          //scanf("%d",&n);
          search(30,a);
          while(a!=NULL){
            printf("%d->",a->data);
            a=a->next;
          }
        return 0;


}
