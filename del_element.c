#include<stdio.h>
  void main()
  {
          int a[8],ele,i,pos,j,m;
  
          ele=sizeof(a)/sizeof(a[0]);
  
          printf("Enter array elements:\n");
          for(i=0;i<ele;i++)
          scanf("%d",&a[i]);
  
          printf("Before.......\n");
          for(i=0;i<ele;i++)
                  printf("%d ",a[i]);
          printf("\n");
  
          printf("Enter the array element's postion which you want to delete: \n");
          scanf("%d",&pos);
  
          for(i=0;i<ele;i++)
          {
                  if(i==pos)
                  {
                          for(j=i;j<ele-1;j++)
                          a[j]=a[j+1];	 
			                       
                  }
		  
          }
	  printf("After.......\n");
          for(i=0;i<ele-1;i++)
                  printf("%d ",a[i]);
          printf("\n");
  
  }

