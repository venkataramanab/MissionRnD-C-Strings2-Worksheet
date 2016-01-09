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
void str_words_in_rev(char *input, int len){
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

char * get_last_word(char * str){

	return NULL;
}
