

/*
 	1	2	3	4
	1	2	3
	1	2
	1
*/

#include<stdio.h>
void main(){
	int row,col;
	printf("Enter row: \n");
	scanf("%d",&row);
	
	printf("Enter col: \n");
	scanf("%d",&col);
	//int x=1;

	for(int i=row; i>=1; i--){
		int x=1;
		for(int j=1; j<=i; j++){
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
