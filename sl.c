#include<stdio.h>
void main()
{
	int a[5]={1,21,51,21,11},l,sl,i,ele;

	ele=sizeof(a)/sizeof(a[0]);
	
	l=0;
	sl=0;

	for(i=0;i<ele;i++)
	{
		if(a[i]>l && a[i]>sl)
			l=a[i];
		if(a[i]>sl && a[i]!=l)
			sl=a[i];
	}

	printf("sl=%d\n",sl);
}
