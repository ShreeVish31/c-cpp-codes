#include<stdio.h>

void create();
void display();
void del();
void insert();
void sortAscen();
void sortDescen();
void merge();
void search();
void exit();
int arr[20],arr2[20],mergearr[40],ch,n,i,val,pos,j,temp,m,found,toSearch;

int main()
{
	do{
	printf("\nEnter the option number: ");
	printf("\n1.Create \n2.Display \n3.Delete \n4.Insert \n5.Ascending Sort \n6.Descending Sort \n7.Merge \n8.Search \n9.Exit \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: create();
		break;
		case 2: display();
		break;
		case 3: del();
		break;
		case 4: insert();
		break;
		case 5: sortAscen();
		break;
		case 6: sortDescen();
		break;
		case 7: merge();
		break;
		case 8: search();
		break;
		case 9: exit(0);
		break;
		default :
			printf("Invaild input");
	}
    }while(ch!=0);
	return 0;
}

void create()
{
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		mergearr[i]=arr[i];
	}
}

void display()
{
	printf("\nThe elements in array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}printf("\n");
}

void del()
{
	printf("\nEnter the position of element to be deleted: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
}

void insert()
{
	printf("\nEnter the position value to be inserted: ");
	scanf("%d",&pos);
	printf("Enter the value: ");
	scanf("%d",&val);
	for(i=n-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
    arr[pos-1]=val;
	n=n+1;
}

void sortAscen()
{
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 if(arr[i]>arr[j])
	 {
	 	temp=arr[i];
	 	arr[i]=arr[j];
	 	arr[j]=temp;
	 }
}

void sortDescen()
{
	for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 if(arr[i]<arr[j])
	 {
	 	temp=arr[i];
	 	arr[i]=arr[j];
	 	arr[j]=temp;
	 }
}

void merge()
{
	printf("Enter the size of array: ");
	scanf("%d",&m);
	printf("\nEnter the elements in array:\n");
	for(j=0;j<m;j++)
	{
		scanf("%d",&arr2[j]);
		mergearr[i]=arr2[j];
		i++;
	}
	printf("Merged array:\n");
	for(j=0;j<n+m;j++)
	{
		printf(" %d ",mergearr[j]);
	}
	
}

void search()
{
  printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    found = 0;   
    for(i=0; i<n; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d\n", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array\n", toSearch);
    }
}
