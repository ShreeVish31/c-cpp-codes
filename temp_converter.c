#include<stdio.h>

int main()
{
	float cel,fah;
	printf("Enter the celsius for conversion: ");
    scanf("%f",&cel);
	fah=(cel*9/5)+32;
	printf("%fF",fah);
	return 0;
}
