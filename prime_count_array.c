#include<stdio.h>
void main()
{
          int a[10],prime[10],i,j,c,ele,k,m;
   
          ele=sizeof(a)/sizeof(a[0]);
  
          printf("Enter Array elemens:\n");
          for(i=0;i<ele;i++)
          scanf("%d",&a[i]);
  
           printf("Array elemnts are:\n");
  
           for(i=0;i<ele;i++)
           printf("%d ",a[i]);
           printf("\n");
  
           for(i=0,c=0,k=0;i<ele;i++)
           {
                   for(j=2;j<a[i];j++)
                   {
                           if(a[i]%j==0)
                            break;
                   }
                   if(j==a[i])
                  {
                      c++;
                      prime[k]=a[i];
                      k++;
                  }
           }
           printf("Prime no. present in array are: \n");
           for(m=0;m<k;m++)
           printf("%d ",prime[m]);
           printf("\n");
  
           printf("count of prime no: %d\n",c);
   	
}
