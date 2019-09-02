
#include<stdio.h>
#include<stdlib.h>
#define new (node*)malloc(sizeof(node));

typedef struct list
{
	int data;
	struct list *next;
}node;

node *Head=NULL;
node *temp=NULL;
int count=0;

void insert()
{
	node *newnode=NULL;
	if(Head==NULL)
	{
		Head=new;
		scanf("%d",&Head->data);
		Head->next=NULL;
		temp=Head;
	}
	else
	{
	  temp->next=new;
	  temp=temp->next;
	  scanf("%d",&temp->data);
	  temp->next=NULL;
	}

}

void swaplist()
{
   node *tmp1=Head,*t1=NULL,*t2=NULL,*t11=NULL,*t22=NULL,*ptr1=Head,*ptr2=NULL;
   t11=new;
   t22=new; 
   while(tmp1)
   {
   	count++;
   	tmp1=tmp1->next;
   }
   if(count>=5 && count%2!=0)
   {	
    do
    {

   		t1=ptr1->next;
   		ptr2=t1->next;
   		t2=ptr2->next;

        t1->next=t2->next;
        t2->next=ptr2;
        ptr2->next=t1;
        ptr1->next=t2;

        t1=ptr1->next;
        t2=ptr2->next;

        ptr1=t1->next;
   		
    }while(t2->next->next!=NULL);
   }
   else if(count>=4 && count%2==0)
   {	
    do
    {

   		t1=ptr1->next;
   		ptr2=t1->next;
   		t2=ptr2->next;

        t1->next=t2->next;
        t2->next=ptr2;
        ptr2->next=t1;
        ptr1->next=t2;

        t1=ptr1->next;
        t2=ptr2->next;

        ptr1=t1->next;
   		
    }while(t2->next!=NULL);
   }	
}

void delete()
{
	int pos;
	node *temp=Head,*p;
	printf("\nEnter position to delete:");
	scanf("%d",&pos);
	if(pos<=0)
		printf("Invalid position");
	else if(pos==1)
	{
		Head=Head->next;
		free(temp);
	}
	else if(pos>1)
	{
		for(int i=1;i<pos-1;i++)
			temp=temp->next;
		p=temp->next;
		temp->next=p->next;
		free(p);
	}
}

void display()
{
	node *tp=Head;
	while(tp)
	{
		printf("<%d>\t",tp->data);
		tp=tp->next;
	}
}


int main()
{
	int n,c;
	do
	{
		printf("\nEnter Choice:\n1.Insert\n2.Delete\n3.Display\n4.swaplist\n5.Exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:insert();
			       break;
			case 2:delete();
			       break;
			case 3:display();
			       break;
			case 4:swaplist();
			       break;

		}
	}while(c<5);
}
































