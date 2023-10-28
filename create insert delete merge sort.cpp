#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[20],b[20],c[20];
int n,i,pos,val,temp,m,j,p,k,num;
int choice;
void create(int num,int x[15]);
void display(int num,int x[15]);
void insert(int pos, int val);
void del(int pos);
void search(int val);
void merge();
void sort(int num, int x[15]);
void reverse();
int main()
{
    int ch;
    do
    {
        printf("\nMenu\n");
        printf("1. Create\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Reverse\n");
        printf("6. merge\n");
        printf("7. Sort\n");
        printf("8. Exit\n");
        printf("\n Enter your choice\t");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
					printf("\n\nEnter the number of elements in an array\n");
    				scanf("%d",&n);
					create(n,a);
                     break;
           // case 2: display(int x[5]);
             //       break;
            case 2: 
					printf("\n\nEnter the position of element to be inserted\n\n");
				    scanf("%d",&pos);
				    printf("\n\nEnter the element to be inserted in the array\n\n");
				    scanf("%d",&val);
					insert(pos,val);
                    break;
            case 3: 
					printf("\n\nEnter the position of element to be deleted\n\n");
    				scanf("%d",&pos);
					del(pos);
                    break;
            case 4: 
					printf("\n\nEnter the element to be searched\n\n");
		  			scanf("%d",&val);
					search(val);
                    break;
            case 5: reverse();
                    break;
            case 6: merge();
                    break;
            case 7: 
					sort(n,a);
                    break;
            case 8: exit(0);
                    break;
            default: 
                    printf("\nInvalid Choice..\n");
                    break;
        }
        printf("\nDo you want to continue??\n\n1=Yes\n\n2=No\n");
        scanf("%d",&choice);
    }while(choice==1);
    return 0;
}
void create(int num,int x[15])
{
    printf("\nEnter the elements of the array:\n\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nThe elements of the array \n");
    display(num,x);
}
void display(int num,int x[15])
{
    for(i=0;i<num;i++)
    {
        printf("%d\t",x[i]);
    }
}
void insert(int pos,int val)
{
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    n=n+1; 
	printf("\n\nArray after insert\n\n"); 
    display(n,a);
}
void del(int pos)
{
    printf("\nthe deleted elemnt is %d\n\n",a[pos]);
    for(i=pos;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    display(n,a);
}
void search(int val)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==val)
        {
            printf("\nThe element is at the position %d\n\n", i+1);
            break;
        }    
    }
    if(i==n)
            printf("\nSearch Unsuccessful\n");  
}
void sort(int num, int x[15])
{
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
            temp=x[j];
            x[j]=x[j+1];
            x[j+1]=temp;
            }
        }
    }
    display(num,x);
}
void reverse()
{
	 printf("\nReversed array is:\t");
	 for(int i=n;i>0;i--)
	 {
	 	printf("%d ",a[i-1]);
	 }
}
void merge()    
{
        printf("\nEnter the size of the second array:\t");
        scanf("%d",&m);
        printf("\nEnter the elements for the second array:\n");
        create(m,b);
        printf("\nThe sorted elements of the array A\n");
        sort(n,a);
         printf("\nThe sortedelements of the array B\n");
        sort(m,b);
	    i=0,j=0,k=0;
        p=n+m;;
        do
        {
        	if(a[i]<b[j])
        	{
        		c[k]=a[i];
        		i++;
        		k++;
			}
			else
			{
				c[k]=b[j];
				j++;
				k++;
			}
		}
		while(k<=p);
        printf("\n\nArray elements after merging:\n\n");
        display(p,c);
}


