/*
 	D	C	B	A
	c	b	a
	B	A
	a

*/

#include<stdio.h>
void main(){
	int row,ch;
	printf("Enter row: \n");
	scanf("%d",&row);

	for(int i=row; i>=1; i--){
		ch=64+i;
		for(int j=1; j<=i; j++){
			if(i%2==0){
				printf("%c\t",ch);
				ch--;
			}
			else {
				printf("%c\t",ch+32);
			ch--;
			}

		}printf("\n");

	}
}
