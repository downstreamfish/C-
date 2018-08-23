#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int price, shares;
	float value, num, denom;
	
	printf("Enter share price (must include a fraction): ");
	scanf("%d%f/%f",&price, &num, &denom);
	
	printf("Enter number of shares: ");
	scanf("%d", &shares);
	
	value = (price + num / denom) * shares;
	printf("Value of holdings: $%.2f\n", value);
	
	return 0;
}
