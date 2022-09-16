

/*
  	a
	b	1
	c	2	A
	d	3	B	e
	f	4	c	g	5
	h	6	D	i	7	E
*/

#include<stdio.h>
void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);
	int x=1, ch=97,ch1=65;

	for(int i=1; i<=row; i++){
		for(int j=1; j<=i; j++ ){
			if(j%2==1){
				printf("%c\t",ch);
				ch++;
			}else if(j%2==0){
				printf("%d\t",x);
				x++;
			}
			else {
				printf("%c\t",ch1);
				ch1++;
			}
		}printf("\n");
	}
}

