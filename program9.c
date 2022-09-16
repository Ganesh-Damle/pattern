

/*
 	a	b	c	d
	5	6	7
	h	i	
	10

*/

#include<stdio.h>
void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);
	int x=1,ch=97;

	for(int i=row; i>=1; i--){
		for(int j=1; j<=i; j++){
			if(i%2==0){
			printf("%c\t",ch);
			}
			else {
				printf("%d\t",x);
			}
			ch++;
			x++;
		}
		printf("\n");
	}
}
