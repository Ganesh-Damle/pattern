

/*
 	16	9	4	1
	9	4	1
	4	1	
	1

*/

#include<stdio.h>
void main(){
	int row,x;
	printf("Enter row: \n");
	scanf("%d",&row);

	for(int i=0; i<row; i++){
		 x=row-i;
		 for(int j=row; j>i; j--){
			printf("%d\t",x*x);
			x--;
		}
		printf("\n");
		
	}
}
