#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("****Printing Management System*****\n");  
        printf("1.Inserting a page \n2.Deleting a page\n3.Displaying  the pages\n4.Exiting\n");  
        printf("Enter your choice:");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("Enter a valid page number\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("Enter the page number:");  
    scanf("%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("pages exceed the limit\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("page inserted\n ");  
      
}  
void delete()  
{  
    int item,i;   
    if (front == -1 || front > rear)  
    {  
        printf("No pages found\n");  
        return;  
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("page deleted :%d\n",item);  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("No pages found\n");  
    }  
    else  
    {   printf("Printing pages .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("Page no :%d\n",queue[i]);  
        }     
    }  
}  
