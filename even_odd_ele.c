#include<stdio.h>
void main()
{
	int a[10],even[10],odd[10],i,j,k,ele,m,n;

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter Array elemens:\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	
	printf("Array elemnts are:\n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
	for(i=0,j=0,k=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
	
		}
		else
		{
			odd[k]=a[i];
			k++;
		}	
	}	
	printf("Even elements are:\n");	
	for(m=0;m<j;m++)
	printf("%d ",even[m]);
	printf("\n");
	
	printf("Odd elements are:\n");	
	for(n=0;n<k;n++)
	printf("%d ",odd[n]);
	printf("\n");
}	
