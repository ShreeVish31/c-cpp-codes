#include<stdio.h>

struct shop
{
	char name[20];
};


int ch,i,ca,shoe,mb,total,cpu=0,ssd=0;
//char name;

int main()
{
	struct shop sh[100];
	printf("Enter your name: ");
	scanf("%s",&sh[i].name);
	printf("Hello %s, Welcome to our Online Shopping.\n", sh[i].name);
	do{
		printf("Enter:\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\n4 - Print bill\n5 - Exit\n");
        scanf("%d", &ch);
        switch(ch)
        {
        	case 1:
        		printf("1.CPU.....5,000/pc \n2.SSD.....10,000/pc \n3.MOUSE.....500/pc \n4.KEYBOARD.....1,000/pc \n");
        		printf("Enter your choice to buy: ");
        		scanf("%d",&ca);
        		if(ca==1)
        			{
        			    printf("Enter quantity:\n");
					    scanf("%d",&cpu);	
				   	    printf("CPU purchased..!\nTHANK YOU FOR PURCHASE\n");
  					}
				else if(ca==2)
					{
						printf("Enter quantity:\n");
					    scanf("%d",&ssd);
					    printf("SSD purchased..!\nTHANK YOU FOR PURCHASE\n");
					}
				else if(ca==3)
					printf("MOUSE purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(ca==4)
					printf("KEYBOARD purchased..!\nTHANK YOU FOR PURCHASE\n");
				else
					printf("Nothing buyed...!\nTHANK YOU FOR VISITING\n");
				break;
				
			case 2:
        		printf("1.NIKE.....5,000/pc \n2.PUMA.....10,500/pc \n3.SPARK.....5,000/pc \n4.JORDAN.....10,900/pc \n");
        		printf("Enter your choice to buy: ");
        		scanf("%d",&shoe);
        		if(shoe==1)
        			printf("NIKE purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(shoe==2)
					printf("PUMA purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(shoe==3)
					printf("SPARK purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(shoe==4)
					printf("JORDAN purchased..!\nTHANK YOU FOR PURCHASE\n");
				else
					printf("Nothing buyed...!\nTHANK YOU FOR VISITING\n");
				break;
				
			case 3:
        		printf("1.SAMSUNG.....50,000/pc \n2.OPPO.....11,000/pc \n3.VIVO.....7,000/pc \n4.IOS.....1,00,000/pc \n");
        		printf("Enter your choice to buy: ");
        		scanf("%d",&mb);
        		if(mb==1)
        			printf("SAMSUNG purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(mb==2)
					printf("OPPO purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(mb==3)
					printf("VIVO purchased..!\nTHANK YOU FOR PURCHASE\n");
				else if(mb==4)
					printf("IOS purchased..!\nTHANK YOU FOR PURCHASE\n");
				else
					printf("Nothing buyed...!\nTHANK YOU FOR VISITING\n");
				break;
				
			case 4:
				system("cls");
				cpu*=5000;
            	printf("CPU amount purchased %d\n",cpu);
            	ssd*=10000;
            	printf("SSD amount purchased %d\n",ssd);
            	
            	total=cpu+ssd;
            	printf("Total amount %d\n",total);
            	printf("Thankyou for purchase");
            	ch=0;
            	break;
				
		}
	}while(ch!=0);
	
	
	
	return 0;
}


