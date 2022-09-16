/*
 	1
	4	9
	16	25	36
	49	68	81	100

*/


#include<stdio.h>
void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);

	int x=1;

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++){
			printf("%d\t",x*x);
			x++;
		}
	printf("\n");
	}
}
