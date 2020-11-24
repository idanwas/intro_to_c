/*
 * str_functions.c
 *
 *  Created on: 24 Nov 2020
 *      Author: afeka
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "str_functions.h"


char* myGets(char* buf, size_t size)
{
	if(buf != NULL && size > 0)
	{
		if(fgets(buf, size, stdin))
		{
			buf[strcspn(buf, "\n")] = '\0';
			return buf;
		}
		*buf = '\0';
	}
	return NULL;
}

int mostCapitalCountWord(const char* str, char* theWord)
{
	int counter, max = 0;
	char* del = " ";
	char* words;
	char* maxCapitalsWord = NULL;
	char temp[MAX];
	strcpy(temp, str);

	words = strtok(temp, del);
	while(words != NULL)
	{
		counter = countCapitalLetters(words);
		if(counter > max)
		{
			max = counter;
			maxCapitalsWord = words;
		}
		words = strtok(NULL, del);
	}
	if(maxCapitalsWord != NULL)
		strcpy(theWord, maxCapitalsWord);
	return max;
}

int countCapitalLetters(const char* word)
{
	int counter = 0;
	while(*word)
	{
		if(isupper(*word))
			counter++;
		word++;
	}
	return counter;
}

void fixSpaces(char* str)
{
	char fixed[MAX];
	char* temp = str;
	int i = 0, flag = 1;
	while(*str)
	{
		if(*str != ' ')
		{
			flag = 0;
			fixed[i] = *str;
			i++;
		}
		else
		{
			if(!flag) // if flag == 0 then we see first space
			{
				flag = 1;
				fixed[i] = *str;
				i++;
			}
		}
		str++;
	}
	fixed[i] = '\0';
	str = temp;
	for(int j = 0; j <= i; j++)
	{
		str[j] = fixed[j];
	}
}

int initLastRow(char text[ROWS][MAX], int rows, int cols)
{
	int countCols = 0;
	for(int i = 0; i < rows - 1; i++)
	{
		countCols += strlen(text[i]);
	}
	text[ROWS - 1][0] = '\0';

	if(countCols >= MAX)
		return 0;

	for(int i = 0; i < rows - 1; i++)
	{
		strcat(text[ROWS - 1], text[i]);
	}
	return 1;
}
