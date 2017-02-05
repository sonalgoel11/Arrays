#include<stdio.h>
int main()
{
	int arr[10];
        int small_position = 0;
	int large_position = 0;
	int i;
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
        }
	int small = arr[0];
	int large = arr[0];
	for(i = 0; i < 10; i++)
	{
		if(small > arr[i])
		{
			small = arr[i];
                        small_position = i;
		}
		if(large < arr[i])
		{
			large = arr[i];
                 //       printf("___________   ");
  			large_position = i;
		}
	}
       // printf("%d %d", large_position, small_position);
	int temp;
	temp = arr[small_position];
        arr[small_position] = arr[large_position];
        arr[large_position] = temp;
        for(i = 0; i < 10 ; i++)	
	{
		printf("%d  ", arr[i]);
	}


        return 0;

}

