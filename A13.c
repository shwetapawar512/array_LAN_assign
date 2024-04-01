/* There are 48 bits stored in an array of character buffer and store them into 2 integer varaible 
   Ex:
   char a[6]={'a','b','c','d','e','f'};
   int num1 = first 32 bits
   int num2 = last 16 bits 

   output:
   num1:1684234849
   num2:26213
*/

#include<stdio.h>
void main()
{
	char a[6]={'a','b','c','d','e','f'};
	unsigned int n1=0,n2=0,i,ele;
	
	/* Logic 01 */
	/*int *p=a;
	short *q=(a+4);

	n1=*p;
	n2=*q;*/
	
	/* Logic 02 */
	n1=a[0] | a[1]<<8 | a[2]<<16 | a[3]<<24;
	n2=a[4] | a[5]<<8;

	printf("n1=%d n2=%d\n",n1,n2);
}
