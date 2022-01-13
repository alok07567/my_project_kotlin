// #include<Stdio.h>
// #include<stdlib.h>
// struct node{
//   int data;
//   struct node* next;
// };
// int create(struct node **q,int i)
// {
//   *q=(struct node*)malloc(i*sizeof(struct node));
//   for(int j=0;j<i;j++)
//   {
//     (*q+j)->data=j;
//     (*q+j)->next=(*q+j+1);
//   }
//   (*q+i-1)->next=NULL;
// }
// int traverse(struct node* ptr)
// {
//   while(ptr!=NULL)
//   {
//     printf("%d\t",ptr->data);
//     ptr=ptr->next;
//   }
//   printf("\n\n");
// }

// struct node* insertatfirst(struct node* head,int i)
// {
//   struct node* ptr=(struct node*)malloc(sizeof(struct node));
//   ptr->next=head; 
//   ptr->data=i;
//   return ptr;
// }
// struct node* insertatend(struct node* head,int i)
// {
//   struct node* ptr=(struct node*)malloc(sizeof(struct node));
//   while((head->next)!=NULL)
//     head=head->next;
//   head->next=ptr;
//   ptr->data=i;
//   ptr->next=NULL;
// }
// int  main()
// {
//   struct node *p;
//   create(&p,100);
//   traverse(p);
//   int n,type;
//   p=insertatfirst(p,555);
//   traverse(p);
//   insertatend(p,333);
//   traverse(p);
// }
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  n%2==0 && printf("%d is even",n) || printf("%d is odd",n);
}
