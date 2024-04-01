#include<stdio.h>
void main()
{
	int i,j,c,flag,k,ele;
	int a[10];

	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);

	printf("Enter array elements:\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	printf("\n");

	printf("The duplicate elements are present in array:\n");
	for(i=0;i<ele;i++)
	{
		for(k=i-1,flag=0;k>=0;k--)
		{
			if(a[i]==a[k])
			{
				flag=1;
				break;
			}
		}
	
		if(flag==0)
		{	

			for(j=i+1,c=1;j<ele;j++)
			{
				if(a[i]==a[j])
				{
					c++;
				}	
			}
		if(c>=2)	
			printf("%d------%d times\n",a[i],c);
		}
	}

}	

