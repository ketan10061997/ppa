
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define new (bstnode*)malloc(sizeof(bstnode))

typedef struct n
{
 int data;
 struct n *left;
 struct n *right;
}bstnode;

bstnode *insert(bstnode *T,int x)
{
 if(T==NULL)
 {
  T=new;
  T->data=x;
  T->left=NULL;
  T->right=NULL;
  return T;
 }
 else if(x>T->data)
 {
  T->right=insert(T->right,x);
  return T;
 }
 else if(x<T->data)
 {
  T->left=insert(T->left,x);
  return T;
 }
 else
 {
  printf("\nNot allowed\n");
  return T;
 }
}

void preorder(bstnode *T)
{
 if(T==NULL)
  return;
 printf("%d\t",T->data);
 preorder(T->left);
 preorder(T->right);
}

void inorder(bstnode *T)
{
 if(T==NULL)
  return;
 inorder(T->left);
 printf("%d\t",T->data);
 inorder(T->right);
}

void postorder(bstnode *T)
{
 if(T==NULL)
  return;
 postorder(T->left);
 postorder(T->right);
 printf("%d\t",T->data);
}

bstnode *search(bstnode *T,int key)
{
 while(T!=NULL)
 {
  if(T->data==key)
   return T;
  else if(key>T->data)
   return (search(T->right,key));
  else
   return (search(T->left,key));
 }
 return 0;
}

int maxelement(bstnode *T)
{
 int max=INT_MIN,left,right,rootval;
 if(T!=NULL)
 {
  rootval=T->data;
  left=maxelement(T->left);
  right=maxelement(T->right);
  if(left>right)
   max=left;
  else
   max=right;
  if(rootval>max)
   max=rootval;
 }
 //printf("\nMaximum element:%d\n",max);
 return max;
}

int main()
{
 int ch,x,key,m;
 bstnode *T=NULL,*t;
 do
 {
  printf("\nEnter your choice:\n1.insert\n2.preorder\n3.inorder\n4.postorder\n5.search\n6.find max\n7.exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter data:\n");
          scanf("%d",&x);
          T=insert(T,x);
          break;
   case 2:preorder(T);
          break;
   case 3:inorder(T);
          break;
   case 4:postorder(T);
          break;
   case 5:printf("\nEnter data to search:\n");
          scanf("%d",&key);
          t=search(T,key);
          if(t)
           printf("\nElement Found\n");
          else
           printf("\nElement not Found\n");
   case 6:m=maxelement(T); 
          printf("\nMaximum element:%d\n",m); 
  }
 }while(ch<7);
}


























