
/*
	*
	*	*
	*	*	*
	*	*	*	*

*/



#include<stdio.h>
void main(){
	int row,col;
	printf("Enter row: \n");
	scanf("%d",&row);

	printf("Enter column: \n");
	scanf("%d",&col);

for (int i=1; i<=row; i++){
	for(int j=1; j<=i; j++){
		printf("*\t");
	}
	printf("\n");
}
}
