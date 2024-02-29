//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int ordernum,quantity;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x,int y){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
    new_node->ordernum=x;
    new_node->quantity=y;
    if(*head==NULL)*head=new_node;
    else (*tail)->nextPtr=new_node;
    *tail=new_node;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->ordernum;
   /* Finish dequeue*/
   *head=t->nextPtr;
   free(t);
   if(head==NULL) *tail==NULL;

       
   return value;
   }
   printf("The queue is empty.\n");
   return 0;
}



#endif
