/*
 * main.c
 *
 *  Created on: 24 Nov 2020
 *      Author: afeka
 */

#include <stdio.h>

#include "str_quests.h"
#include "arrays.h"

int main()
{

	//Q1();

	//Q2();

	//Q3();

	//Q4();


	int size = 5;
	int arr[5] = {1,2,3,4,5};

	int rows = 3, cols = 4;
	int matrix[3][4] = {
			{1,2,3,4},{55,66,77,88},{100,200,300,400}
	};

	printArray(arr, size);
	printf("\n\n");
	printMatrix((int*)matrix, rows, cols);
	return 0;
}

