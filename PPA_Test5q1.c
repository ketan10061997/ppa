#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define new (node*)malloc(sizeof(node))

typedef struct n
{
    int data;
    struct n *next;
}node;
node *head=NULL;
void reverse()
{
    node *newnext=NULL,*tmp=NULL;

    while(head)
    {
     newnext=head->next;
     head->next=tmp;
     tmp=head;
     head=newnext;
    }
    head=tmp;
}

void display()
{
    node *temp=head;
    while(temp)
    {
      printf("%d\t",temp->data);
      temp=temp->next;
    }
}

int main()
{  
    int negflag=0,n,rem,count=0;
    char str[100];
    node *newnode=NULL,*t1=NULL,*t2=NULL;
    fgets(str,100,stdin);
    if(str[0]=='-')
    {
        negflag=1;
    }
    else
    {
       n=atoi(str);
       //printf("%d\n",n);
        while(n>0)
        {
            rem=n%10;
            if(head==NULL)
            {   head=new;
                head->data=rem;
                head->next=NULL;
            }
            else
            {
                newnode=new;
                newnode->data=rem;
                newnode->next=head;
                head=newnode;
            }
            n=n/10;
        }
    } 
    if(negflag==1)
    {
        for(int i=0;str[i]!='\0';i++)
         str[i]=str[i+1];
            n=atoi(str);
        while(n>0)
        {
            rem=n%10;
            if(head==NULL)
            {
                head=new; 
                head->data=rem;
                head->next=NULL;
            }
            else
            {
                newnode=new;
                newnode->data=rem;
                newnode->next=head;
                head=newnode;
            }
            count++;
            n=n/10;
        }
        head->data=-(head->data);
    } 
   reverse();
   if(negflag==0)
   {
    t1=head;
    while(t1!=NULL)
    {
      if(t1->data!=9)
      {
          t1->data+=1;
          break;
      }
      else
      {
          t1->data=0;
          t1=t1->next;
      }
    }
    t2=head;
    while(t2->next!=NULL)
     t2=t2->next;
      if(t2->data==0)
      {
          t2->next=new;
          t2=t2->next;
          t2->data=1;
          t2->next=NULL;
      }
   }
   else
   {
     t1=head;
    while(t1!=NULL)
    {
      if(t1->data!=0)
      {
          t1->data-=1;
          break;
      }
      else if(t1->data<0)
      {
          t1->data+=1;
          break;
      }
      else
      {
          t1->data=9;
          t1=t1->next;
      }
    }
    t2=head;
    for(int i=1;i<=count-2;i++)
     t2=t2->next;
    t2->data=-(t2->data);
    t2->next=NULL;
   }

    reverse();
    display();

}