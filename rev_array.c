#include<stdio.h>
void main()
{
        int a[5],i,j,ele,t;

        ele=sizeof(a)/sizeof(a[0]);

         printf("Enter array elements:\n");
          for(i=0;i<ele;i++)
          scanf("%d",&a[i]);
  
          printf("Before.......\n");
          for(i=0;i<ele;i++)
                  printf("%d ",a[i]);
          printf("\n");
  
          for(i=0,j=ele-1;i<ele/2;i++,j--)
          {
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
          }
  
          printf("After.......\n");
  
          for(j=0;j<ele;j++)
                  printf("%d ",a[j]);
          printf("\n");
  
  
          printf("a[5]={%d,%d,%d,%d,%d}\n",a[0],a[1],a[2],a[3],a[4]);
}

