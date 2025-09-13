/*
 * main.c
 *
 *  Created on: Sep 12, 2025
 *      Author: thela
 */

#include <stdio.h>

int main(){

	char c1,c2,c3,c4,c5,c6;

	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &c1,&c2,&c3,&c4,&c5,&c6);
	printf("\nASCII codes: %d %d %d %d %d %d\n", c1,c2,c3,c4,c5,c6);

	while(getchar() != '\n'){

	}
	getchar();
}
