/*
 * str_functions.h
 *
 *  Created on: 24 Nov 2020
 *      Author: afeka
 */

#ifndef STR_FUNCTIONS_H_
#define STR_FUNCTIONS_H_

#define MAX 255
#define ROWS 5

char* myGets(char* buf, size_t size);

int mostCapitalCountWord(const char* str, char* theWord);

int countCapitalLetters(const char* word);

void fixSpaces(char* str);

int initLastRow(char text[ROWS][MAX], int rows, int cols);

#endif /* STR_FUNCTIONS_H_ */
