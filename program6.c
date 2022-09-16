
/* 
 	a
	b	1
	c	2	d
	e	3	f	4
	g	5	h	6	i	

*/


#include<stdio.h>

void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);
	int x=1, ch=97;

	for(int i=1; i<=row; i++){
		//int x=1,ch=97;
		for(int j=1; j<=i; j++){
			if(j%2==0){
			printf("%d\t",x);
			x++;
			
			}
			else{
				printf("%c\t",ch);
			ch++;	
			}
			//x++;
			//ch++;
		}printf("\n");
	}
}



