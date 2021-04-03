
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,y=20;
	
	for(i=0;i<=20;i++){
		
		for(j=0;j<=y;j++)
		   printf("*");
	printf("\n");
	y-=1;	   
	}
	return 0;
}
