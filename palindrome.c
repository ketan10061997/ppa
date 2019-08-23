
#include<stdio.h>
#include<string.h>

int main()
{
 int flag=0;
 char str[10];
 printf("Enter the string:\n");
 scanf("%s",str);
 int i=0,j;
 j=strlen(str)-1;
 
 while(i<j)
 {
  if(str[i]!=str[j])
  {
   flag=1;
  }
  i++;
  j--;
 }

 if(flag)
 {
  printf("\nString is not Palindrome\n");
 }
 else
 {
  printf("\nString is Palindrome\n");
 }

}









