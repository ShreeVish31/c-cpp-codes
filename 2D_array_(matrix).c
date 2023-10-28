#include<stdio.h>

void read();
int readA();
int printA();
int readB();
int printB();
void add();
void sub();
void multiply();

int a[3][3],b[3][3],c[3][3],i,j,k,arows,acolumns,brows,bcolumns,ch,mul=0;

int main()
{
	printf("Make your choice for 2D array(matrix):\n");
	printf("1.Read & display \n2.Addition \n3.Subtraction \n4.Multiplication \n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:read();
		break;
		case 2:add();
		break;
		case 3:sub();
		break;
		case 4:multiply();
		break;
		default:
			printf("Invaild choice.");
	}
    
	return 0;
}

//read...!!
void read()
{
	printf("Enter the number of rows: ");
	scanf("%d",&arows);
	printf("Enter the number of columns: ");
	scanf("%d",&bcolumns);
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf("Enter value for [%d][%d]: ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	//to print the 2d array(matrix)
	printf("The matrix is:\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}

//readA...!!
int readA()
{
	printf("Matrix A:\n");
	printf("Enter the number of rows: ");
	scanf("%d",&arows);
	printf("Enter the number of columns: ");
	scanf("%d",&acolumns);
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			printf("Enter value for [%d][%d]: ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	return 1;
}

//printA...!!
int printA()
{
		//to print the 2d array(matrix A)
	printf("The matrix A is:\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acolumns;j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	return 1;
}

//readB...!!
int readB()
{
	printf("Matrix B:\n");
	printf("Enter the number of rows: ");
	scanf("%d",&brows);
	printf("Enter the number of columns: ");
	scanf("%d",&bcolumns);
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf("Enter value for [%d][%d]: ", i, j);
			scanf("%d",&b[i][j]);
		}
	}
	return 1;
}

//printB...!!
int printB()
{
	//to print the 2d array(matrix B)
	printf("The matrix B is:\n");
	for(i=0;i<brows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf(" %d ", b[i][j]);
		}
		printf("\n");
	}
	return 1;
}

//printC...!!
int printC()
{
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			printf(" %d ", c[i][j]);
		}
		printf("\n");
	}
	return 1;
}

//addition...!!
void add()
{
	readA();
	readB();

	printA();
	printB();
	
	
	//to add two matrices
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//to print added matrix
	printf("The matrix after addition:\n");
	printC();
}

//subtraction...!!
void sub()
{
	readA();
	readB();
	
	printA();
	printB();
	
	//to sub two matrices
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	//to print subtracted matrix
	printf("The matrix after subtraction:\n");
	printC();
}

//multiplication...!!
void multiply()
{
	readA();
	readB();
	
	printA();
	printB();
	
	//multiply two matrices...!!
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcolumns;j++)
		{
			for(k=0;k<brows;k++)
			{
				mul=mul+(a[i][k]*b[k][j]);
			}
			c[i][j]=mul;
			mul=0;
		}
	}
	
	//print multiplied matrix...!!
	printf("The matrix after multiplication:\n");
	printC();
	
}
