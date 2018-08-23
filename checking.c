#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cmd;
	float balance = 0.0, credit, debit;
	printf("*** ACME checkbook-balancing program ***\n");
	printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
	
	for(;;)
	{
		printf("Enter command: ");
		scanf("%d", &cmd);
		switch (cmd)
		{
			case 0: 
				balance = 0.0; break;
			case 1:
				printf("Enter amount of credit: ") ;
				scanf("%f", &credit);
				balance += credit; break;
			case 2:
				printf("Enter amount of debit: ");
				scanf("%f", &debit);
				balance -= debit; break;
			case 3:
				printf("Current balance : %.2f\n", balance);
				break;
			case 4:
				return 0;
			default:
				printf("*** ACME checkbook-balancing program ***\n");
				printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
				break;
		}
	}
	return 0;
}
