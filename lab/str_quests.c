/*
 * str_quests.c
 *
 *  Created on: 24 Nov 2020
 *      Author: afeka
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "str_quests.h"
#include "str_functions.h"

void Q1()
{
	char str1[MAX], str2[MAX];

	printf("Please enter a string up to %d chars: \n", MAX-1);
	scanf("%s", str1);
	printf("String 1 is %s . \n", str1);

	getchar(); // clear the buffer from the '\n'

	printf("Please enter a string up to %d chars: \n", MAX-1);
	fgets(str2, sizeof(str2), stdin);
	printf("String 2 is ");
	str2[strlen(str2) - 1] = '\0';
	puts(str2);

	int len1 = strlen(str1), len2 = strlen(str2);
	if(len1 > len2)
		printf("The longer string is %s . \n", str1);
	else if(len1 == len2)
		printf("The two strings have the same length. \n");
	else
		printf("The longer string is %s . \n", str2);

	int diff = strcmp(str1, str2);
	if(diff > 0)
		printf("%s is before %s in the dictionary. \n", str2, str1);
	else if(diff == 0)
		printf("The two strings are the same. \n");
	else
		printf("%s is before %s in the dictionary. \n", str1, str2);

}

void Q2()
{
	char str[MAX], word[MAX];
	printf("Please enter a sentence up to %d chars: "
			"( I will find the word with most capital letters in it. ) \n", MAX-1);
	myGets(str, sizeof(str));

	int capitalsCount = mostCapitalCountWord(str, word);
	if(capitalsCount > 0)
		printf("The word %s has %d capital letters. \n", word, capitalsCount);
	else
		printf("There were no words with capital letters. \n");
}

void Q3()
{
	char str[MAX];
	printf("Please enter a sentence up to %d chars: \n", MAX-1);
	myGets(str, sizeof(str));

	printf("Before: %s \n", str);
	fixSpaces(str);
	printf("After: %s \n", str);

}

void Q4()
{
	char text[ROWS][MAX];
	for(int i = 0; i < ROWS - 1; i++)
	{
		printf("Please enter string #%d: \n", i+1);
		myGets(text[i], sizeof(text[i]));
	}

	if(initLastRow(text, ROWS, MAX))
		for(int i = 0; i < ROWS; i++)
			printf("String #%d: %s\n", i+1, text[i]);
	else
		printf("The total length of all strings are too long! \n");
}
