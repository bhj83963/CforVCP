#include "stdio.h"
#include "bb.c"
int main()
{
	int i1, i2;
	i1 = 1;
	i2 = 2;
	i1 = Max( i1, i2 );
  	if ( i1 > 1 ) 
		printf("i1 > 1 hello world %d\n" , i1 );
	else
		printf("i1 <1 bhj hello %d \n", i1 );

	i1 = 100;
	while ( i1 > 0 )
	{
	//	printf("while i1 > 0 \n");
		i1--;
	}	
	int arr[100];
	for ( i1=0;i1<100;i1++)
	arr[i1] = i1;
	for ( i1 = 0; i1 < 100 ; i1 ++ )
	//	printf( "i1 xunhuan \n");	
	return 0;
}
