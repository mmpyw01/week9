#include<stdio.h>
int main()
{
	int num[5],i,min,max;
	printf("Enter 5 number : ");
	scanf_s("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	max = num[0];
	min = num[0];

	for (i = 0; i < 5; i++) {
		if (num[i] > max)
			max = num[i];
		else if(num[i] < min)
			min = num[i];
	}

	printf("Max value is %d\n", max);
	printf("Min value is %d", min);
}