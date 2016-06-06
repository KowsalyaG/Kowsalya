#include <stdio.h>
 
int main(void) {
	int num;
	scanf("%d",&num);
	if(num>=0){
		printf("POSITIVE");
	}
	if(num<0){
		printf("NEGATIVE");
	}
	return 0;
}
