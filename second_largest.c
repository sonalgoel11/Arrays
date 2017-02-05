#include<stdio.h>
#define upper_limit 10
int main()
{
	int pqr[upper_limit];
	int i;	
	int count = 0;
	for(i = 0; i < upper_limit; i++)
	{
		scanf("%d", &pqr[i]);
	}
	int largest = 0;
        int not_num = 0;

	 	for(i = 0; i < upper_limit; i++)
		{
			if(pqr[largest] <= pqr[i])
  			{
               			 largest = i;
               		 }
		}
		int pos = largest;
		int second_largest;
                 pqr[second_largest] = pqr[upper_limit-largest-1];
                for(i = 0; i < upper_limit; i++)
		{
                        if(i != pos && pqr[second_largest] < pqr[i])
			{
				second_largest = i;
			}
		}

                
 		
	
	printf("%d",pqr[second_largest]);
	return 0;
}


