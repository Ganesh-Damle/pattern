

/*
 	A
	1	2
	A	B	C
	1	2	3	4

*/

#include<stdio.h>
void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);

	for(int i=1; i<=row; i++){
		int x=1,ch=65;
		for(int j=1; j<=i; j++){
			if(i%2==0){
				printf("%d\t",x);
				x++;
			}
			else{
				printf("%c\t",ch);
				ch++;

			}
		}printf("\n");
	}
}
