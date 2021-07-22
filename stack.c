#include <stdio.h>
#define MAX 10

int stack[MAX],top=-1;
int push();
int pop();
int peek();
int display();


int main(void) {
int ch;
do
{
  printf("\n *****MAIN MENU*****");
  printf("\n 1. PUSH");
  printf("\n 2. POP");
  printf("\n 3. PEEK");
  printf("\n 4. DISPLAY");
  printf("\n 5. EXIT");
  printf("\n Enter your option: ");
  scanf("%d", &ch);
  switch(ch)
  {
    case 1:
         push();
         break;
    case 2:pop();
         break;

    case 3:peek();
        break;

    case 4:display();
        break;
  }
}
    while(ch!=5);
    return 0;
}

int push()
{
  int item;
  
  if(top==MAX-1)
  {
    printf("OVERFLOW");
  } 
  else
  {
    printf("Enter the element to push:");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;
  } 
return 0;
}

int pop()
{
  int val;
  if(top==-1)
    printf("UNDERFLOW");
  else
  {
    val=stack[top];
    top=top-1;
    printf("popped element is %d",val);
  }
return 0;
}

int peek()
{
if(top==-1)
  printf("STACK IS EMPTY");
  else
  printf("Top element is %d",stack[top]);
return 0;
}

int display()
{
  int i;
  if(top==-1)
  printf("STACK IS EMPTY");
  else
  {
  printf("***STACK***\n ");
  for(i=0;i<=top;i++)
  {
    printf("%d\t",stack[i]);
  }
  }
return 0;
}
        