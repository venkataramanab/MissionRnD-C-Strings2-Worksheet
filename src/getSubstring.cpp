/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>
int validation(char*, int, int);
char * get_sub_string(char *str, int i, int j){
	if (validation(str, i, j)){
		char *substr;
		substr = (char *)malloc(sizeof(char)*(j - i));
		for (int loop_var = i, k = 0; loop_var <= j; loop_var++){
			substr[k++] = str[loop_var];
		}
		return substr;
	}
}
int validation(char *str, int i, int j){
	if ((str != NULL) && (i <= j) && (i >= 0) && (j >= 0)){
		return 1;
	}
	else{
		return 0;
	}
}