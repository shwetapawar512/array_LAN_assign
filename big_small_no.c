#include<stdio.h>
 void main()
 {
         int a[10],i,ele,l,s;
 
         ele=sizeof(a)/sizeof(a[0]);
 
         printf("enter array elements:\n");
         for(i=0;i<ele;i++)
                 scanf("%d",&a[i]);
 
         printf("array elements are:\n");
         for(i=0;i<ele;i++)
                 printf("%d ",a[i]);
         printf("\n");
 
         l=s=a[0];
 
         for(i=0;i<ele;i++)
         {
                 if(a[i]>l)
                         l=a[i];
                 else if(a[i]<s)
                         s=a[i];
         }
 
         printf("Largest no. is %d and smallest no. is %d\n",l,s);
 }

