#include<stdio.h>
#define MAX 5
int a[MAX];
int front=-1,rear=-1;

void insert()
{
    int ele;
    if (rear==MAX-1)
    {
        printf("queue overflow")
    }
    else
    {
    printf("enter element");
    scanf("%d",&ele);
    }
    if (front==-1)
        front=0;
        rear++;
    a[rear]=value;
    printf("inserted into queue\n",ele);

}

void delete()
{
    if (front==-1)
    {
        printf("queue underflow"):
    
    }
    else
    {
        printf("deleted from queue\n",a[front])
    }
    front++;
    if (front>rear)
       front=rear=-1
}

void peek()
{
  if (front==-1)
  {
    printf("queue underflow"); 
  }
  else
  {
    printf("peek elment\n",a[front]);
  }  
}

void display()
{
    int i;
    if (front==-1)
    {
        printf("queue underflow");
    }
    else
    {
        printf("display the elements");
        for(i=front;i<=rear;i++)
        printf("%d\n",a[i])
    }
}

int main()
{
    int choice;
    while()
    {
      printf("queue operations\n");
      printf("1.insert\n");
      printf("2.delete\n");
      printf("3.peek\n");
      printf("4.display\n");
      printf("5.exit\n");
      printf("enter your choice");
      printf("%d",&choice);

      switch(choice)
      {
        case 1:
             insert();
             break;
        case 2:
            delete();
            break;
        case 3:
             peek();
             break;
        case 4:
             display;
             break;
        case 5:
              return 0;
        default:
              printf("invalid choice\n");
      }
    }
    return 0;
}