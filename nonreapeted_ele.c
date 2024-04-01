#include<stdio.h>
void main()
{
	int i,j,c,flag,k,ele,m,b[10];
	int a[10];

	ele=sizeof(a)/sizeof(a[0]);
	printf("ele=%d\n",ele);

	printf("Enter array elements:\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	printf("Before.....:\n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	for(i=0,m=0;i<ele;i++)
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
			if(c==1)
			{
				b[m]=a[i];
				m++;
			}
			
		}	
	}	
	
	for(i=0;i<m;i++)
	printf("%d ",b[i]);
	printf("\n");	
		
}	
