#include<stdio.h>

int main()
{
	int a,b,i,j,x;
	printf("Enter the intervals: ");
	scanf("%d %d",&a,&b);
	printf("The prime numbers from %d to %d are:\n",a,b);
	for(i=a+1;i<b;i++)
	{
		x=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				x++;
			}
	    }
		if(x==2)
		 printf("%d ",i);
	}
	return 0;
}
