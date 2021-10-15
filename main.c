#include <stdio.h>
#include <stdlib.h>

int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
  top = -1;
  printf("\n Enter stack size ");
  scanf("%d",&n);
  printf("\n\t Operations for the Stack ");
  printf("\n\t -------------------------");
  printf("\n\t 1 - Push\n\t 2 - Pop\n\t 3 - Display\n\t 4 - End ");
  do{
    printf("\n\t Pick a number ");
    scanf("%d", &choice);
    switch(choice){

case 1:
    {
       push();
       break;
    }
case 2:
    {
        pop();
        break;
    }
case 3:
    {
        display();
        break;
    }
case 4:
    {
        printf("\n\t Exit ");
        break;
    }
default:
    {
        printf("\n\t Enter a a number 1-4 ");
    }

    }

    }
    while(choice != 4);
    return 0;
}
void push(){
if(top >= n-1){
   printf("\n\t Stack is over flow ");
}
else{
    printf(" Enter the value you want to be pushed ");
    scanf("%d",&x);
    stack[++top]=x;
}
}
void pop(){
if(top <= -1){
    printf("\n\t Stack is under flow ");
}
else{
    printf("\n\t The popped element is %d ", stack[top]);
    top--;
}
}
void display(){
if(top >= 0){
    printf("\n Elements in the stack \n ");
    for(i = top; i >= 0; --i)
    printf("\n\%d", stack[i]);
    printf("\n next choice ");
}
else{
    printf("\n Stack is empty ");

}
}


