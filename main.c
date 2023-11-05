#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define SIZE 5
int main(void)
{	
	int i;
	int grade[SIZE];
	printf("input 5 scores");
	
	for (i=0; i<SIZE; i++)
		scanf("%d", &grade[i]);
	
	for (i=0; i<SIZE; i++)
		printf("grade[%d] = %d\n", i, grade[i]);
		
	system("PAUSE");
	return 0;
}
