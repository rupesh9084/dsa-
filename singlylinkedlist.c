#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
   struct node *next;
};
struct node *head=0;
 struct node *createnode(){
  struct node *ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("enter the number:");
  scanf("%d",&ptr->data);
  ptr->next=0;
  return ptr;
}
 void insert_start(){
  struct node *ptr1;
  ptr1=createnode();
  if(head==NULL){
    head=ptr1;
  }
   else{
   ptr1->next=head;
   head=ptr1;

   }
}
 void display(){
  struct node * j1;
  j1=head;
  while(j1!=0){
    printf("%d ",j1->data);
    j1=j1->next;
  }
}
void beganing_deletion(){
  struct node *del;
  del=head;
  if(head==NULL){
    printf("list is empty");
  }else{
   head=head->next;
   free(del);
  }
}
void insert_ending(){
  struct node *end,*a;
  end=createnode();
  a=head;
  if(head==NULL){
    head=end;
  }else{
    while(a->next!=0){
        a=a->next;
    }a->next=end;
  }
}

void ending_deletion(){
  struct node *p,*q;
  p=head;
  if(head==NULL){
    printf("list is empty");
  }else{
      while(p->next->next!=0){
        p=p->next;
      }q=p->next;
        p->next=NULL;
        free(q);

  }
}

void insert_middle(){
 struct node *mid,*m,*r;
 mid=createnode();
 if(head==NULL){
  head=mid;
 }
 else{
  int n;
  printf("enter the number where you want to insert");
  scanf("%d",&n);
  m=head;
  while(m->next->data!=n){
    m=m->next;
  } 
  r=m->next;
  m->next=mid;
  mid->next=r;

 }
}
void delete_middle(){
  struct node *g,*h,*p;
  if(head==NULL){
    printf("there is no any node to delete");
  }
  else{
    g=head;
    int d;
    printf("enter the number that you want to delete");
    scanf("%d",&d);
    while(g->next->data!=d){
      g=g->next;
    }
    p=g->next->next;
    g->next->next=NULL;
    h=g->next;
    g->next=p;
    free(h);
  }
}

int main(){
     printf("\n1.insertion from begnaing ");
printf("\n2.insertion from ending ");
printf("\n3.deletion from begnaing ");
printf("\n4.deletion from ending ");
printf("\n5.insertion from middle ");
printf("\n6.deletion from middle ");
printf("\n7.display");
printf("\n8.exit");
int ch;

 
while(1){

printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch){
 case 1:{

  insert_start();

  break;}

 case 2:{

      insert_ending();

 break;}

 case 3:{

 beganing_deletion();

 break;}

 case 4:{

  ending_deletion();

 break;}

 case 5:{
  insert_middle();

 break;}
 case 6:{
  delete_middle();

 break;}
 case 7:{

  display();

 break;}

 case 8:{

   exit(0);

 break;}
 
 default:
 printf("invalid\n");

}
}

return 0;
}



