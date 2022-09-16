
/*
	1	
	1	2
	1	2	3
	1	2	3	4

*/



#include<stdio.h>
void main(){
	int row,col;
	printf("Enter row: \n");
	scanf("%d",&row);

	printf("Enter column: \n");
	scanf("%d",&col);

for (int i=1; i<=row; i++){
	int x=1;
	for(int j=1; j<=i; j++){
		printf("%d\t",x);
		x++;
	}
	printf("\n");
}
}
