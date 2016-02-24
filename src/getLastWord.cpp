/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include <Stdio.h>
#include <string.h>
void reverse(char*, int, int);
char * str_words_in_rev(char *input, int len);
int rightSpace(char *str, int len);
char * get_last_word(char * str){
	if (str){
		int len = 0, spacePos = -1;
		while (str[len++]);
		len -= rightSpace(str, len);
		for (int i = len - 1; i >= 0; i--){
			if (str[i] == ' '){
				spacePos = i;
				break;
			}
		}
		char *lastWord = (char*)malloc(sizeof(char)*(len - spacePos));
		for (int i = spacePos + 1, index = 0; i < len; i++){
			lastWord[index++] = str[i];
		}
		return lastWord;
	}
	return NULL;
}
int rightSpace(char *str, int len){
	int rightSpaces = 0;
	for (int i = len - 1; i > 0; i--){
		if (str[i] == ' '){
			rightSpaces++;
		}
		else{
			break;
		}
	}
	return rightSpaces;
}
/*
char * str_words_in_rev(char *input, int len){
	int start = 0, w_count = 0;
	for (int i = 0; i <= len; i++){
		if (input[i] == ' '){
			w_count++;
			reverse(input, start, i - 1);
			start = i + 1;
		}
		else if ((input[i] == '\0') && (w_count>0)){
			reverse(input, start, len - 1);
		}
	}
	if (w_count > 0){
		reverse(input, 0, len - 1);
	}
	return input;
}
void reverse(char *in, int first, int last){
	while (first < last){
		in[first] = in[first] + in[last];
		in[last] = in[first] - in[last];
		in[first] = in[first] - in[last];
		first++;
		last--;
	}
}
/*
char * get_last_word(char * str){
	if (str != NULL){
		int len = strlen(str);
		char *resultStr = (char*)malloc(sizeof(char)*len);
		char *result=NULL;
		resultStr = str_words_in_rev(str, len);
		int spaceCount = 0;
		for (int i = 0; i < len; i++){
			
			if ((str[i] == ' ')&&(str[i+1]!=' ')&&(i+1<len)&&(str[i-1]!=' ')){
				result = (char*)malloc(sizeof(char)*(i + 1));
				i -= spaceCount;
				for (int j = 0; j < i; j++){
					result[j] = resultStr[spaceCount++];
				}
				result[i] = '\0';
				break;
			}
			else if(str[i]==' '){
				spaceCount++;
			}
		}
		if ((result == NULL)&&(spaceCount!=0)){
			return "";
		}
		else if ((result == NULL) && (spaceCount == 0)){
			return str;
		}
		return result;
	}
	return NULL;
}
int strlen(char *str){
	int len = 0;
	while (str[len] != NULL){
		len++;
	}
	return len;
}*/
