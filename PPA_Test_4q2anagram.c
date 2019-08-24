
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s1[100],s2[100],str1[100],str2[100];

char * bsort(char str[])
{
 int n=strlen(str)-1;	
 int i,j;
 char temp; 
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{	
			if(str[j]>str[j+1])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}	
		}	
	}	
 return str; 
}

int main()
{
	int i,j=0,k=0,flag=0;
	char st1[100],st2[100];
	printf("enter string1:\n");
	gets(s1);	
	printf("enter string2:\n");
	gets(s2);
	int l1=strlen(s1)-1;
	int l2=strlen(s2)-1;
	for(i=0;i<=l1;i++)
	{
	  if(s1[i]>=65 && s1[i]<=90)
	   s1[i]+=32;	  
	  if(s1[i]==' ')
	  {
          }		  
          else
	  {str1[j]=s1[i];
           j++;
	  }	  
	}
         j=0;	
	for(i=0;i<=l2;i++)
	{  	
	  if(s2[i]>=65 && s2[i]<=90)
	   s2[i]+=32;	  
	  if(s2[i]==' ')
	  {
          }		  
          else
	  {str2[j]=s2[i];
           j++;
	  }	  
	}	
	//sort strings
	strcpy(str1,bsort(str1));
	strcpy(str2,bsort(str2));
        //check strings
	
        
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]!=str2[i])
		{
			flag=1;
			break;
		}	
	}
        if(flag)
	{
		printf("\nstring is not anagram\n");
	}
        else
	{
		printf("\nstrings is anagram\n");
	}	
         	
}









