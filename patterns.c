#include<stdio.h>
#include<cs50.h>

void pattern( int, int, char, char);

int main(void)
{
	int N, R;
	char c, f;
	N = get_int();
	R = get_int();
	if (N == 1)
		pattern(N, R+1, c='#', f='.');
	else
		pattern(N, R, c=' ', f='#');
}
		
		
void pattern(int N, int R, char c, char f)
{
	int j;
	for( int i = 0; i < R; i++)
	{	
		printf("\n");
		for(j = 0; j < R-1-i; j++)
			printf("%c", c);
		if( N == 2)	
			for(int k = j; k < R; k++)	
				printf("%c", f);
	}
}	
	
