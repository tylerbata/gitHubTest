#include "Foo.h"


/*
	gets the size of a null terminated string
*/
int getSize(char *src) {
	int size = 0;
	while (src[size++]) { }
	return size;
}


/*
	inplace reverse of null terminated string
*/
void reverse(char* src, size_t size) {
	for (int i = 0; i < (size-1) / 2; i++) {
		src[size - 1] = src[i];
		src[i] = src[size - i - 2];
		src[size - i - 2] = src[size - 1];
	}
	src[size - 1] = '\0';
}