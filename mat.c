#include <stdio.h>
#include <math.h>

void imprime(float A[L][C])
{
	int i, j;
	
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
			printf("%f\t", A[i][j]);
		
		printf("\n");
	}
}

#define L 4
#define C 5

main()
{
	float A[4][5] = {{1,1,0,3,4},{2,1,-1,1,1},{3,-1,-1,2,-3},{-1,2,3,-1,4}};
	int i,j,k;
	float lamba, aux;

	imprime(A);
}
