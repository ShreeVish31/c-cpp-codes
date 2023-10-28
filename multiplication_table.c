#include<stdio.h>

int main()
{
	int n,i,tab;
	printf("Enter the number to print table: ");
    scanf("%d",&n);
    printf("The table of %d is:\n",n);
    for(i=1;i<=10;i++)
    {
    	tab=i*n;
    	printf("%d*%d=%d\n",n,i,tab);
	}
	return 0;
}
