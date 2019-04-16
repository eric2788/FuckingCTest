#include <string.h>
#include <stdio.h>
#include <stdbool.h>

void alpha_sort(char arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

bool equal_char_arr(char ch[], char ch2[]){
   int len = strlen(ch);
   int len2 = strlen(ch2);
   int i,j;
   bool result = true;
   for(i = 0;i < (len<len2?len:len2) ;i++){
   		result = result && ch[i] == ch2[i];
   }
   return result;
}


int getlen(int str[]){
	int i = 0;
	while(str[i] != NULL) i++;
	return i;
}

bool equal_char_arr2(char ch[], char ch2[]){
	int i;
	int len = 0, len2 = 0;
	for(i = 0; i < strlen(ch);i++){
		len += ch[i];
	}
	for(i = 0; i < strlen(ch2);i++){
		len2 += ch2[i];
	}
	return len == len2 ? true : false;
}

