#include <stdio.h>//using array
int stack[5];
int top=-1;
void Push();
void pop();
void peek();
void display();
int main()
{
    int ch;
    while (ch!=0)
    {
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
        printf("enter your choice");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        Push();

        break;
        
        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;
        }
    }
    
    

}

void Push()
{
    int x;
    
    printf("enter data:");
    scanf("%d",&x);
    if(top == 4)
    {
        printf("overflow");

    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if (top==-1)
    {
        
        printf("undefined");

    }
    else{
        item=stack[top];
        top--;

    }   
}
void peek()
{
    if (top==-1)
    {
        printf("stack is empty");
         
    }
    else
    {
        printf("\ntopmost element is %d", stack[top]);
    }  
}

void display()
{
    int i;
    for ( i = top; i>= 0; i--)
    {
        
        printf("%d\n",stack[i]);
    }
    
}
