#include<stdio.h>
#include<conio.h>
struct node{
	struct node *next;
	int data;
};
struct node *head;
void finsert();
void linsert();
void rinsert();
void fdelete();
void ldelete();
void rdelete();
void display();
void search();
void main()
{
	int choice;
	printf("enter the operations:\n");
	while(choice!=9)
	{
		printf("1.finsert\n2.linsert\3.rinsert\n4.fdelete\n5.ldelete\n6.rdelete\n7.display\n8.search\n9.exit\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				finsert();
				break;
			case 2:
				linsert();
				break;
			case 3:
				rinsert();
				break;
			case 4:
				fdelete();
				break;
			case 5:
				ldelete();
				break;
			case 6:
				rdelete();
				break;
			case 7:
				dispaly();
				break;
			case 8:
				search();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("entered is wrong\n");
		}
	}
	
}
void finsert()
{
	struct node *ptr;
	int data;
	ptr=(struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("overflow\n");
		
	}
	else
	{
		printf("enter the item:\n");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("node inserted\n");
	}
}
void linsert()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter the item\n");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			
		}
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=ptr;
			ptr->next=NULL;
			head=ptr;
			printf("node deleted\n");
		}
		
	}
	
}
void rinsert()
{
		struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("overflow\n");
	}
	else
	{
		printf("enter the item\n");
		scanf("%d",&item);
		ptr->data=item;
		printf("enter the location\n");
		scanf("%d",&loc);
		temp=head;
		for(i=0;i<loc;i++)
		{
			ptr;
		}
		temp->next=ptr->next;
		ptr->next=NULL;
		printf("node inserted\n");
		
}
void fdelete()
{
	if(head==NULL)
	{
		printf("underflow\n");
		
	}
	else
	{
		head=ptr;
		ptr=head->next;
		free(ptr);
		printf("node deleted\n");
	}
}
void ldelete()
{
	if(head==NULL)
	{
		printf("underflow\n");
	}
	else
	{
		int ptr,ptr1;
		if(head->next==NULL)
		{
			ptr=ptr1;
			ptr=ptr->next;
		}
		else if(temp->next==NULL)
		{
			temp->next=NULL;
			
		}
	}
}
