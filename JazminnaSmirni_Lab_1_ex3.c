/*
 * Lab_1_ex3.c
 *
 *  Created on: Jan 31, 2024
 *      Author: jsmirni
 */

#include <stdio.h>

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	double celcius;
	int fahrenheit;

	printf("Enter the temperature (fahrenheit): ");
	scanf("%d", &fahrenheit);

	celcius = (5.0/9.0) * (fahrenheit - 32);
	printf("The temperature in celcius %.2f.", celcius);

	return 0;
}

