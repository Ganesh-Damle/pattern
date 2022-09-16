

/*
 	A
	A	B
	A	B	C
	A	B	C	D

*/

#include<stdio.h>
void main(){
	int row;

	printf("Enter row: \n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		char ch='A';
		for(int j=1; j<=i; j++){
			printf("%c\t",ch);
			ch++;
		}
		printf("\n");
	}
}
