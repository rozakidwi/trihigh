#include <stdio.h>

int a,b,c,tmp;

void get_user_input() {
	printf("\nWelcome.\n");
	printf("This program will find the highest number from the inputs.\n\n");

	printf("Insert the first number: ");
	scanf("%d", &a);
	printf("Insert the second number: ");
	scanf("%d", &b);
	printf("Insert the third number: ");
	scanf("%d", &c);
};

int main() {
	get_user_input();
	return 0;
}
