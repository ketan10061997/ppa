
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

void reverselist()
{
 int pos,p=1;
 node *tmp=f;
 node *tmp1=NULL,*newnode=NULL,*temp=NULL;
 printf("Enter position:\n");
 scanf("%d",&pos);

 while(p<pos)
 { 
  tmp=tmp->next;
  p++;
 }
 
 tmp1=tmp->next;
 tmp->next=NULL;

 while(f)
 {
  newnode=f->next;
  f->next=temp;
  temp=f;
  f=newnode;
 }
 
 f=temp;
 
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
 temp->next=tmp1; 
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

int main()
{
	int n,ch;
	do
	{	
		printf("\nenter your choice:\n1.insert\n2.delete\n3.display\n4.Reverselist\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
                               break;
                        case 4:reverselist();
                               	 
		}		 
	}while(ch<5);
}






