#include "stdafx.h"

void bubblesort(unsigned __int8 *M, int size)
{
	int i, j;
	int x;
	for (i = 0; i<size; i++)
	{            
		for (j = size - 1; j>i; j--)
		{     
			if (M[j - 1]>M[j])
			{
				x = M[j - 1];
				M[j - 1] = M[j];
				M[j] = x;
			}
		}
	}
	for (i = 0; i<size; i++)
		printf("%d ", M[i]);
}
void main()
{
	unsigned __int8 *p; 
	unsigned int n;
     int i;
     scanf_s("%d", &n); 
	p = (unsigned __int8 *)malloc(n*sizeof(unsigned __int8 ));
	for (i = 0; i<n; i++)
	    scanf("%d", &p[i]); 
	bubblesort(p,n);	
	_getch();
}