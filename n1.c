#include <stdio.h>
int main()
{
	int size ,array[size],i,median;
	printf("\n enter the size of an  array");
	scanf("%d",&size);
	printf("\n enter the array values");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	median=size/2;
	printf("the median is %d",array[median]);
	return 0;
}
