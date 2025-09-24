#include<stdio.h>
int main(){
	int num;
	printf("enter the integer:",num);
	scanf("%d",&num);
	if((num % 2==0) &&(num % 5==0))
		printf("%d is divisible by both 2 and 5 but not by 8.\n",num);
    else
		printf("%d is not divisible by both 2 and 5 but not by 8.\n",num);
		
		return 0;
	
	
	
}