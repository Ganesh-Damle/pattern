
/*
 	1	A	2	B
	1	A	2
	1	A
	1

*/

#include<stdio.h>

void main(){
        int row;
        printf("Enter row: \n");
        scanf("%d",&row);
        //char ch='A';
	

	if(row%2!=0){

       for(int i=1; i<=row; i++){
                char ch='A';
                int x=1;
		for (int j=row; j>=i; j--){
			if(j%2!=0){
				printf("%d\t",x);
				x++;
			}
			else if(j%2==0){

                        	printf("%c\t",ch);
				ch++;
			}
           
                }
                printf("\n");
                      }
	}
       else{
	        for(int i=1; i<=row; i++){
                char ch='A';
                int x=1;
                for (int j=row; j>=i; j--){
                        if(j%2==0){
                                printf("%d\t",x);
                                x++;
                        }
                        else if(j%2!=0){

                                printf("%c\t",ch);
                                ch++;
                        }

                }
                printf("\n");
                      }
       }

}


