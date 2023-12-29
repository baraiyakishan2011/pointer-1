#include<stdio.h>
int main( )
{
	int side, area=0  ;
	int *ps, *pa  ;
		printf(" Enter side of square : ") ;
		scanf("%d ", & side) ;
		ps = & side  ;
		pa = & area  ;
		area = (*ps) * (*ps)  ;
		printf("\n Area of square is : %d ", *pa) ;
}