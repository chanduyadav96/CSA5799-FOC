#include <stdio.h>
int main(){
	int number,digit,sum=0;
	
	printf("enter an integer:");
	scanf("%d",&number);
	
	
	while(number>0){
		digit=number % 10;
		sum +=digit;
		number /= 10;
	}
	
	printf("sum of digits: %d\n",sum);
	
	return 0;
}

