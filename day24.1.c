#include<stdio.h>

void cube (int a){
	
	printf("Cube of your Value : %d",a*a*a);
	
}


int main (){
	
	int x ;
	
	printf("Enter Value : ");
	scanf("%d",&x);
	
	cube (x);
	
	return 0 ;
}
