#include<stdio.h>
void main()
{
	char a[10];
	int i,j,k,ele;

	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);

	printf("Enter array elements:\n");
	for(i=0;i<ele;i++)
	scanf(" %c",&a[i]);
	printf("\n");

	printf("Before..........\n");
	for(i=0;i<ele;i++)
	printf("%c ",a[i]);
	printf("\n");

	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<ele;k++)
					a[k]=a[k+1];
				j--;	
				ele--;	
			
			}
		}
	}	
	printf("After..........\n");
	for(k=0;k<ele;k++)
	printf("%c ",a[k]);
	printf("\n");
}
