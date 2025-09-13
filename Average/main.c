/*
 * main.c
 *
 *  Created on: Sep 12, 2025
 *      Author: thela
 */

#include <stdio.h>

int main(){

	float number1,number2,number3;
	float average;

	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%f",&number1);
	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%f",&number2);
	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%f",&number3);

	average = (number1+number2+number3)/3;
	printf("\nAverage = %f\n",average);
	//fflush(stdout);

	while(getchar() != '\n'){

	}
	getchar();
}


