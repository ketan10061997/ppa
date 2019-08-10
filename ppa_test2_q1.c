
#include<stdio.h>
#include<stdlib.h>
#define new (node*)malloc(sizeof(node))

typedef struct nd
{
	int data;
	struct nd *next;
}node;

node *head=NULL;
node *f=NULL;
node *r=NULL;
void create(int n)
{
	int i;
	node *temp=NULL;
	if(n>0)
	{	
		head=new;
		printf("\nenter data:\n");
		scanf("%d",&head->data);
		head->next=NULL;
		f=head;	
		r=head;
		for(i=1;i<n;i++)
		{
			r->next=new;
			r=r->next;
			scanf("%d",&r->data);
			r->next=NULL;
		}
	}
	else
	{
		printf("\nno node is created\n");
	}       	

}	


void insert()
{
	int d;
	node *newnode=NULL;
	newnode=new; 
	printf("\nenter data:\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(f==NULL && r==NULL)
	{
		head=new;
		head->data=newnode->data;
		f=head;
		r=head;    
	}
	else
	{
		
		r->next=newnode;
		r=r->next;
		r->next=NULL; 	 
	}	 
}

void delete()
{
	if(f==NULL && r==NULL)
	{
		printf("\nqueue is empty\n");
	}
	else if(f==r)
	{
		printf("\ndeleted element is %d",f->data);
		f=r=NULL;
	}	
	else
	{
		printf("\ndeleted element is %d",f->data);
		f=f->next;
	}	 
}

void display()
{
	node *temp=f;
	printf("\n");
	if(f==NULL && r==NULL)
	{
		printf("\nqueue is empty\n");
	}
	else
	{	
		while(temp)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
	}
	printf("\n");

}

void peek()
{
	printf("\n%d\n",r->data);
}	

int main()
{
	int n,ch;
	printf("\nenter how many nodes:\n");
	scanf("%d",&n);
	create(n);
	do
	{	
		printf("\nenter your choice:\n1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:peek();
			       break;
			case 4:display();	 
		}		 
	}while(ch<5);
}






