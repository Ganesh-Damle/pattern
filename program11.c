

/*
 	D	C	B	A
	C	B	A
	B	A
	A

*/


#include<stdio.h>
void main(){
	int row,x;
	printf("Enter row: \n");
	scanf("%d",&row);


	for(int i=0; i<row; i++){
		x=64+row+i;
		for (int j=row; j>i; j--){
			printf("%c\t",x);
			x--;
		}
		printf("\n");

	}
}


