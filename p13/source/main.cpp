#include <stdio.h>
#include<stdlib.h>

void cubeby(int &nptr);

int main(void)
{
	int num = 5;
	printf("\nThe new value of number is %d\n", num);
	cubeby(num);
	printf("\nThenew value of number is %d\n", num);
	system("pause");
	return 0;
}
void cubeby(int &nptr) {
	nptr = nptr * nptr*nptr;
}