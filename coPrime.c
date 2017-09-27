#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int number){
    if(number==1)
    return 0;
    int dummy = (int) sqrt(number), i;
		for (i = 2; i <= dummy; i++) {
			if (number % i == 0) {
				return 0;
			}
		}
	return 1;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    //Any even number have 2 as common divisor
    if(num1%2==0 && num2%2==0){
        printf("Not a Co-prime");  
    }
    //1 is co-prime with every number
    else if(num1==1 || num2==1){
        printf("Co-prime Number");
    }
    //Any two successive numbers/ integers are always co-prime
    else if(abs(num1-num2)==1){
        printf("Co-prime Number");
    }
    //Every prime number is co-prime to each other
    else if(prime(num1)&&prime(num2)){
        printf("Co-prime Number");
    }
    else{
        printf("Not a Co-prime");
    }
}
