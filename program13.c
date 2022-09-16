
/*
	A	B	C	D
	B	C	D
	C	D
	D

*/

/*
#include<stdio.h>
void main(){
	int row;
	printf("Enter row: \n");
	scanf("%d",&row);
	char ch='A';
	


	for(int i=1; i<=row; i++){
		//char ch='A';
		char temp=ch;
		for (int j=row; j>=i; j--){
			printf("%c\t",temp);
		temp++;
		}
		printf("\n");
		ch++;
	}
}
*/


#include<stdio.h>
void main(){
        int row;
        printf("Enter row: \n");
        scanf("%d",&row);
        //char ch='A';



        for(int i=1; i<=row; i++){
                int x=64+i;
		for (int j=row; j>=i; j--){
                        printf("%c\t",x);
                x++;
                }
                printf("\n");
                
        }
}







