#include <bits/stdc++.h>
using namespace std;

#define N 6

int main()
{
	int table[N][N] = {{1, 2, 3, 4, 13, 17},
					   {5, 6, 7, 8, 13, 17},
					   {9, 10, 11, 12, 19, 27},
					   {13, 14, 15, 16, 63, 27},
					   {9, 10, 11, 12, 53, 19},
					   {13, 14, 15, 16, 83, 11}
					  };
					  
	int count = 0;
	int i=0;
	int j=0;
	
	int M =N;
	int O =0;
	while(count != N*N)
	{
		
		while(j<M)
		{
			printf("%d ", table[i][j]);
			j++;
			count++;
		}
		i = i+1;
		j = j-1;
		
		while(i<M)
		{
			printf("%d ", table[i][j]);
			i++;
			count++;
		}
		i = i-1;
		j= j-1;
	//	printf("i = %d\n", i);
	//	printf("\nj = %d\n", j);
		
		while(j>=O)
		{
			printf("%d ", table[i][j]);
			j--;
			count++;
		}
		j++;
		i = i-1;
		while(i>O)
		{
			printf("%d ", table[i][j]);
			i--;
			count++;
		} 
		i++;
		j = j+1;
		
		M--;
		O++;
		
		
	}
	return 0;
}
