#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 4

void boolMatrix(int table[R][C])
{
	unordered_multimap<int, int>container;
	
	int i,j;
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			if(table[i][j] == 1)
			{
			//	printf("i =%d j=%d\n", i, j);
				container.insert(make_pair(i, j));
			}
		}
	}
	
	//printf("container size= %d", container.size());
	
	unordered_multimap<int, int>::iterator it;
	
	for(it=container.begin(); it!=container.end(); it++)
	{
//		printf("i =%d j=%d\n", it->first, it->second);
		for(i=0; i<R; i++)
		{
			table[i][it->second] = 1;
		}
		
		for(j=0; j<C; j++)
		{
			table[it->first][j] = 1;
		}
		
		
		
	}
	
	for(i=0; i<R; i++)
	{
		for(j=0; j<C; j++)
		{
			printf("%2d ", table[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int mat[R][C] = { {1, 0, 0, 1},
        			   {0, 0, 1, 0},
     				   {0, 0, 0, 0},
    				 };
    				 
    boolMatrix(mat);
	return 0;
}
