#include <bits/stdc++.h>
using namespace std;

#define N 4

void findValue(int table[N][N], int val)
{
	int i,j;
	i=0;
	j=N-1;
	
	while(i<N && j>=0)
	{
		if(table[i][j] == val)
		{
			printf("Element found at x = %d  &  y = %d\n", i, j);
			break;
		}
		else if(table[i][j] < val)
		{
			i++;
			//break;
		}
		else
		{
			j--;
		}
	}
	
	if(table[i][j]!=val)
	{
		printf("Element not found\n");
	}
}

int main()
{
	
	int table[N][N] = { {10, 20, 30, 40},
                    	{15, 25, 35, 45},
                    	{27, 29, 37, 48},
                    	{32, 33, 39, 50},
                  	  };
                  	  
    findValue(table, 59);
	return 0;
}
