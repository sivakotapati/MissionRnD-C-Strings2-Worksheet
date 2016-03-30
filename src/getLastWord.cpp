/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	//returns last Word from the string,returns NULL for invalid inputs

	//checking for invlaid condition
	if (str == NULL){
		return NULL;
	}

	char *lastword = (char *)malloc(10 * sizeof(char));
	lastword[0] = '\0';

	int i, j, lastSpace=-1;

	//getting position starting position of last Word
	for (i = 0; str[i]; i++){
		if (str[i] == ' '){
			lastSpace = i;
		}
	}

	//getting lastWord
	j = 0;
	for (i = lastSpace + 1; str[i]; i++){
		lastword[j] = str[i];
		j++;
	}
	lastword[j] = '\0';

	return lastword;
}

