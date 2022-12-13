#include <stdio.h>
#include <stdlib.h>

void cubebyreference(int *nptr);

int main(void)
{
	int num = 5;
	printf("The original value ofnumber is %d", num);
	cubebyreference(&num);
	printf("\nThe new value of number is %d\n", num);
	system("pause");
	return 0;
}
void cubebyreference(int *nptr)
{
	*nptr = *nptr**nptr**nptr;
}