#include<stdio.h>
int main()
{
	int arr[10];
	int position = 0;
	int i;
        int small;
        for(i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}
        small = arr[0];
	for(i = 0; i < 10; i++)
        {
		if(small > arr[i])
		{
			small = arr[i];
			position = i;
		}
	}
        printf("%d", position);
        return 0;
}	

