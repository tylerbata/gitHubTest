#include <stdio.h>
#include <windows.h>
#include "Foo.h"

using namespace std;

int main() {

	char str[128];
	printf("Hello GitHub!\n\nSay something >>  ");
	scanf_s("%127s", str, 127);

	int size = getSize(str);
	reverse(str, size);
	printf("The string reversed: %s", str);


	Sleep(2000);

	return 0;
}