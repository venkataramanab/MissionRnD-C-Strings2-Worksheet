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
#include<malloc.h>
char * get_sub_string(char *str, int i, int j){
	if (str && (i <= j) && (i >= 0)){
		int len = 0;
		char *subStr;
		while (str[len++]);
		if ((len > (j - i))&&(j<len)){
			subStr = (char *)malloc(sizeof(char)*(j-i));
			for (int start = i,index=0; start <= j; start++){
				subStr[index++] = str[start];
			}
			subStr[j-i+1] = NULL;
			return subStr;
		}
	}
	return NULL;
}