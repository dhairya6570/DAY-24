#include<stdio.h>

void cube (int a){
	
	if(a%15==0){
		printf("\nGiven number is divisible by 3 & 5 both ");
	}
	else{
		printf("\nGiven number is not divisible by 3 & 5 both ");
	}
	
}


int main (){
	
	int x ;
		
	printf("Enter Value : ");
	scanf("%d",&x);
	
	cube (x);
	
	return 0 ;
}
