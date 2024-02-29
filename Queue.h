

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->ordernum=x;
  new_node->quantity=y;
  new_node ->nextPtr=NULL ;
  if(q->size==0){
    q->headPtr=new_node;
  }
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->ordernum;
   int pay=0,cash=0,nofood=0;
   switch(value){
    case 1: {
      printf("Ramen\n");
      pay=100*t->quantity;
      printf("You have to pay: %d\n",100*t->quantity);
      break;
    }
    case 2: {
      printf("Somtum\n");
      pay=20*t->quantity;
      printf("You have to pay: %d\n",20*t->quantity);
      break;
    }
    case 3: {
      printf("Fried Chicken\n");
      pay=50*t->quantity;
      printf("You have to pay: %d\n",50*t->quantity);
      break;
    }
    default: {
      printf("No food\n");
      nofood=1;
   }
   }
  if(nofood==0){
    printf(":cash:");
   scanf("%d",&cash);
   if(cash-pay!=0){
    while(cash-pay<0){
      printf(":cash:");
      scanf("%d",&cash);
    }
    printf("Thank you\n");
    if(cash-pay>0){
      printf("Change is %d\n\n",cash-pay);
    }
   }
   else printf("Thank you\n\n");
  }
   q->headPtr=t->nextPtr;
   if(q->size==1)q->tailPtr=NULL;
   q->size--;
   free(t);

       /*Finish dequeue */
   //return value;
   }
   else printf("Empty queue\n");
  
   return 0;
}
