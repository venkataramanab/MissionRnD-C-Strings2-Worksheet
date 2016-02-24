/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
bool wordMatch(char *str, char *word);
int getStrLen(char *str);
int count_word_in_str_way_1(char *str, char *word){
	int count = 0;
	do{
		if ((*str == *word) && (wordMatch(str, word))){
				count++;
		}
	} while (*str++);
	return count;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	int count = 0;
	char *strPtr = str;
	if ((*strPtr == *word) && (wordMatch(strPtr, word))){
			count++;
	}
	if (*strPtr++ != NULL){
		count += count_word_int_str_way_2_recursion(strPtr, word);
	}
	return count;
}
int getStrLen(char *str){
	int len = 0;
	while (str[len++]);
	return len-1;
}
bool wordMatch(char *str, char *word){
	int index = 0;
	int wordLen = getStrLen(word);
	for (index; (index < wordLen)&&(str[index]!=NULL); index++){
		if (str[index] != word[index]){
			break;
		}
	}
	if (index == wordLen){
		return true;
	}
	return false;
}
