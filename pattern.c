#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number of rows to be printed:");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
