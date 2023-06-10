#define ROWS 2
#define COLS 3
#include <stdio.h>
int m[ROWS][COLS] = {{11, 12, 13},
                     {21, 22, 33}
                    };
int main () {
	int col;
	int row;
	int max;
	int min;
	int n;
	int a;
	int b;
	int c;
for (int row=0; row<ROWS; row++){
	for (int col=0; col<COLS; col++){
		printf ("%5d", m[row][col]);
}
printf ("\n");
}
max = m[1][1];
min = m[1][1];
for (int row=0; row<ROWS; row++){
for (int col=0; col<COLS; col++){
if	( m[row][col]>max){
	max=m[row][col];
	n=row+1;
	c=col+1;
}
if	( m[row][col]<min){
	min=m[row][col];
	a=row+1;
	b=col+1;
}

}
}
printf ("max[%d][%d] %d\n[%d][%d]min %d",n,c,max,a,b,min);
return 0;
}
