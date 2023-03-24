#include<stdio.h>
#define SIZE 5
int top=-1;
int stack[SIZE];
void display()
{
  int i;
  if(top==-1)
  {
    printf("\nSTACK IS EMPTY....");
    return;
  }
  for(i=top;i>=0;i--)
    printf("\nstack[%d]=%d",i,stack[i]);
}

void push(int d)
{
 if(top==(SIZE-1))
 {
    printf("\nSTACK IS FULL ..!! STACK OVERFLOW...");
 }
 else
 {
  stack[++top]=d;
  printf("\nThe content of the stack after insertion is :\n");
  display();
 }
}

void pop(void)
{
 int pop_ele;
 if(top==-1)
 {
    printf("\nThe stack is empty..!!STACK UNDERFLOW...");
 }
 else
 {
   pop_ele=stack[top--];
   printf("\nThe popped out element of the stack is : %d",pop_ele);
   printf("\n\nThe content of the stack after deletion is ");
   display();
 }
}
void main()
{
  int data,choice,q=0;
  while(q!=1)
  {
   printf("\n\n\n\t\t\t\t*****MAIN MENU*****");
   printf("\n\n\n\n\n\n\t ENTER 1 --> TO PUSH THE ELEMENT INTO THE STACK");
   printf("\n\t ENTER 2 --> TO POP THE ELEMENT FROM THE STACK");
   printf("\n\t ENTER 3 --> TO DISPLAY THE CONTENT OF THE STACK ");
   printf("\n\t ENTER 4 --> TO QUIT");
   printf("\n\n\nEnter your choice : ");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
	    printf("\nENTER THE ELEMENT TO BE INSERTED : ");
	    scanf("%d",&data);
	    push(data);
     break;
     case 2:
	    pop();
     break;
     case 3:
	    printf("\nTHE CONTENT OF THE STACK IS : ");
	    display();
     break;
     case 4:
	    q=1;
	    printf("\nTHANK YOU....HAVE A NICE DAY");
     break;
   }
  }
}
