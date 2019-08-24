
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	int i,j,n,k,count=1,l=0;
	char ch,ar[100],c[100];

	fp=fopen("a.txt","r");
	fscanf(fp,"%d",&l);
	while(!feof(fp))
	{
		fscanf(fp,"%c",&ch);	
		ar[i]=ch;
		i++;
		
	}
	//printf("%d",l);
        puts(ar);
	//j=strlen(ar)-1;
	n=0;
	for(j=(strlen(ar)-1);j>=0;j--)
        {
	 n=0;	
         k=0;		
	 while(ar[j]!=' ')	
	 {
		 
		 c[k]=ar[j];
		 j--;
		 k++;
         }
	 c[k]='\0';
	 while(n<=l)
	 {	 
	 for(i=0;c[i]!='\0';i++)
	 {
		 printf("%c",c[i]);
	 }
	 printf("\t");
         n++;	 
	 }
        }	 
        fclose(fp);	
}

