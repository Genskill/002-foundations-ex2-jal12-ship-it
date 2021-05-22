#include<stdio.h>
#include<cs50.h>

void pattern( int, int, char, char);

int main(void)
{
	int N, R;
	char c, f;
	N = get_int("Enter type of pattern (1 or 2) ");
	R = get_int("Number of rown");
	if (N == 1)
		pattern(N, R+1, c='#', f='.');
	else
		pattern(N, R, c=' ', f='#');
}
		
		
void pattern(int N, int R, char c, char f)
{
	int j;
	printf("\n");
	for( int i = 0; i < R; i++)
	{	
		for(j = 0; j < R-1-i; j++)
			printf("%c", c);
		if( N == 2)	
		{
			for(int k = j; k < R; k++)	
				printf("%c", f);
			printf("\n");
		}
		else
			if( i < R-1 )
				printf("\n");
	}
}	
	
