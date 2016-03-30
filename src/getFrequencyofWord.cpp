/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int string_length(char *);
int count_word_in_str_way_1(char *str, char *word){
	//returns the no.of times a word occured in a string

	int n=0, m = 0;
	//getting lengths of string and word
	n = string_length(str);
	m = string_length(word);

	int i, j,count=0;
	//checking for word in the string
	for (i = 0; i < n; i++){
		for (j =0; j < m&&i+j<n; j++){
			//mismatch 
			if (str[i + j] != word[j]){
				break;
			}
			//match found
			if (j == m-1) count++;
		}
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

int string_length(char *s){
	//returns length of string
	if (s == NULL){
		return 0;
	}
	int i=0;
	for (i = 0; s[i]; i++);
	return i;
}