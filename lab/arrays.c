/*
 * arrays.c
 *
 *  Created on: 24 Nov 2020
 *      Author: afeka
 */

#include <stdio.h>
#include "arrays.h"

void printArray(const int* arr, int size)
{
	for(int i = 0; i < size; i++, arr++)
		printf("%5d", *arr);
}

void printMatrix(const int* matrix, int rows, int cols)
{
	for(int i = 0; i < rows; i++)
	{
		printArray(matrix, cols);
		matrix += cols;
		printf("\n");
	}
}
