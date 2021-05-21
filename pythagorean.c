#include <stdio.h>
#include <cs50.h>

int pyth(int, int, int);

int main(void)
{
	int s1, s2, s3, res;
	s1 = get_int("side 1 "); 
	s2 = get_int("side 2 "); 
	s3 = get_int("side 3 ");
	
	if( s1 > s2 && s2 > s3)
		res = pyth(s1, s2, s3);
	else if( s2> s1 && s2> s3)
		res = pyth(s2, s1, s3);
	else
		res = pyth(s3, s1, s2);
		
	if(res)
		printf("Yes\n");
	else
		printf("No\n");
	
}

int pyth(int a, int b, int c)
{
	if( a*a == b*b + c*c) 
		return 1;
	else
		return 0;
}
