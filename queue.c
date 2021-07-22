#include <stdio.h>
#define MAX 10

int queue[MAX],rear=-1,front=-1;
int insert();
int delete();
int display();


int main(void) {
int ch;
do
{
  printf("\n *****MAIN MENU*****");
  printf("\n 1. INSERT");
  printf("\n 2. DELETE");
  printf("\n 3. DISPLAY");
  printf("\n 4. EXIT");
  printf("\n Enter your option: ");
  scanf("%d", &ch);
  switch(ch)
  {
    case 1:
         insert();
         break;
    case 2:delete();
         break;
    case 3:display();
         break;
  }
}while(ch!=4);
  return 0;
}

int insert()
{
  int item;
  
  if(rear==MAX-1)
  {
    printf("OVERFLOW");
  } 
  else 
  {
    printf("Enter the element to insert:");
    scanf("%d",&item);
    if(front==-1 && rear==-1)
        {
          front=0;
          rear=0;
        }
    else
      {
        rear=rear+1;
      }
    queue[rear]=item;
  } 
return 0;
}

int delete()
{
  int val;
  if(front==-1 || front>rear)
    printf("UNDERFLOW");
  else
  {
    val=queue[front];
    front=front+1;
    printf("deleted  element is %d",val);
  }
return 0;
}

int display()
{
  int i;
  if(front==-1 && rear==-1)
  printf("queue IS EMPTY");
  else
  {
  printf("***QUEUE***\n ");
  for(i=front;i<=rear;i++)
  {
    printf("%d\t",queue[i]);
  }
  }
return 0;
}