#include<stdio.h>
  void main()
  {
          char a[6],ch;
	  int ele,i,pos,j;
	    
          ele=sizeof(a)/sizeof(a[0]);
  
          printf("Enter array elements:\n");
          for(i=0;i<ele-1;i++)
          scanf(" %c",&a[i]);
  
          printf("Before.......\n");
          for(i=0;i<ele-1;i++)
                  printf("%c ",a[i]);
          printf("\n");
  
          printf("Enter the array element's postion which you want to add: \n");
          scanf("%d",&pos);

	  printf("Enter a character you want to add:\n");
	  scanf(" %c",&ch);
  
          for(j=ele-1;j>pos;j--)
          	a[j]=a[j-1];
	  a[j]=ch;
	  	
	  printf("After.......\n");
          for(i=0;i<ele;i++)
                  printf("%c ",a[i]);
          printf("\n");
  
  }
