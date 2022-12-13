#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	int *aptr;

	a = 7;
	aptr = &a;

	printf("the address of a is %p"
		"\n The value of aptr is %p", &a, aptr);
	printf("the address of a is %d"
		"\n The value of *aptr is %d", a, *aptr);
	printf("\n\nShowing that * and & are complements of "
		"\n each other \n &*aptr = %p"
		"\n *&aptr = %p\n", &*aptr, *&aptr);
	system("pause");
	return 0;


}